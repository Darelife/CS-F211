#include <bits/stdc++.h>
using namespace std;

#define int long long
using pii = pair<int, int>;

#define forr(i, n) for (int i = 0; i < n; i++)
#define reforr(i, n) for (int i = n; i >= 0; i--)
#define eqforr(i, a, n) for (int i = a; i <= n; i++)
#define sqforr(i, n) for (int i = 1; i * i <= n; i++)
#define f(i, a, b) for (int i = a; i < b; i++)
#define pba push_back
#define popb pop_back
#define popf pop_front
#define allEle(x) (x).begin(), (x).end()
#define allRle(x) (x).rbegin(), (x).rend()

typedef vector<int> vint;
typedef vector<string> vstr;
#define vcstr(vstr, n) forr(i, n) cin >> vstr[i]
#define vcin(vint, n) forr(i, n) cin >> vint[i]
#define vpin(vint)                                                             \
  for (auto x : vint)                                                          \
    cout << x << " ";                                                          \
  cout << endl;
#define vpstr(vstr)                                                            \
  for (auto x : vstr)                                                          \
    cout << x << " ";                                                          \
  cout << endl;

const int inf = 1e9 + 5;
const int MOD = 1e9 + 7;

void merge(vint &a, int l, int m, int r) {
  int n1 = m - l + 1, n2 = r - m, i = 0, j = 0, k = 0;

  vint temp(n1 + n2);
  while (i < n1 && j < n2) {
    if (a[l + i] <= a[m + 1 + j])
      temp[k++] = a[l + i++];
    else
      temp[k++] = a[m + 1 + j++];
  }

  while (i < n1)
    temp[k++] = a[l + i++];
  while (j < n2)
    temp[k++] = a[m + 1 + j++];

  for (int i = 0; i < n1 + n2; i++)
    a[l + i] = temp[i];
}

void mergeSort(vint &a, int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
  }
}

void solve() {
  int n;
  cin >> n;
  vint a(n);
  vcin(a, n);

  mergeSort(a, 0, n - 1);
  vpin(a);
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  // cin >> t;
  for (int i = 0; i < t; i++)
    solve();
}