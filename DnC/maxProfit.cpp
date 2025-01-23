/*
 * Let A[1..n] = price for each day
 * Find max A[j] - A[i] where j > i
 */

#include <bits/stdc++.h>
using namespace std;

void m(vector<int> &a, int l, int m, int r, int &ans) {
  vector<int> b(r - l + 1);
  ans = max(ans, a[r] - a[l]);
  int i = l, j = m + 1, k = 0;

  while (i <= m && j <= r) {
    if (a[i] < a[j]) {
      b[k++] = a[i++];
    } else {
      b[k++] = a[j++];
    }
  }
  while (i <= m) {
    b[k++] = a[i++];
  }
  while (j <= r) {
    b[k++] = a[j++];
  }
  for (int i = l; i <= r; i++) {
    a[i] = b[i - l];
  }
}

void ms(vector<int> &a, int l, int r, int &ans) {
  if (l < r) {
    ms(a, l, l + (r - l) / 2, ans);
    ms(a, l + (r - l) / 2 + 1, r, ans);
    m(a, l, l + (r - l) / 2, r, ans);
  }
}

int main() {
  vector<int> a = {7, 1, 5, 3, 6, 4};
  int n = a.size();
  int ans = 0;
  ms(a, 0, n - 1, ans);
  cout << ans << endl;
}
