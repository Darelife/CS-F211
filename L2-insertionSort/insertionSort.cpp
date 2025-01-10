#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define vint vector<int>
#define int long long
using pii = pair<int, int>;

vint insertionSort(vint a) {
  for (int i = 1; i < a.size(); i++) {
    int j = i - 1;
    while ((j-- + 1) && a[j + 1] > a[i])
      a[j + 2] = a[j + 1];
    a[j + 2] = a[i];
  }
  return a;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  vint a = {3, 5, 4, 6, 2, 7, 8};
  a = insertionSort(a);
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}