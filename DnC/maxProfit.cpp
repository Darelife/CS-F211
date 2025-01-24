/*
 * Let A[1..n] = price for each day
 * Find max A[j] - A[i] where j > i
 */

//! THIS CODE IS O(nlogn)
// however, it can be easily done in O(n)
// find the min of the left side, and the max of the right side

#include <bits/stdc++.h>
using namespace std;

void m(vector<int> &a, int l, int m, int r, int &ans) {
  vector<int> b(r - l + 1);
  int minLeft = *min_element(a.begin() + l, a.begin() + m + 1);
  int maxRight = *max_element(a.begin() + m + 1, a.begin() + r + 1);
  ans = max(ans, maxRight - minLeft);
  // //* THIS IS BECAUSE, IF THE ARRAY IS ALREADY SORTED, THEN THE MAX PROFIT
  // WILL
  // // BE
  // //* THE largest element of the right one - smallest element of the left one
  // ans = max(ans, a[r] - a[l]);

  // // Regular Merge Sort OR we can just use the inbuilt sort function
  // // sort(a.begin() + l, a.begin() + r + 1);
  // int i = l, j = m + 1, k = 0;

  // while (i <= m && j <= r) {
  //   if (a[i] < a[j]) {
  //     b[k++] = a[i++];
  //   } else {
  //     b[k++] = a[j++];
  //   }
  // }
  // while (i <= m) {
  //   b[k++] = a[i++];
  // }
  // while (j <= r) {
  //   b[k++] = a[j++];
  // }
  // for (int i = l; i <= r; i++) {
  //   a[i] = b[i - l];
  // }
}

void ms(vector<int> &a, int l, int r, int &ans) {
  if (l < r) {
    ms(a, l, l + (r - l) / 2, ans);
    ms(a, l + (r - l) / 2 + 1, r, ans);
    m(a, l, l + (r - l) / 2, r, ans);
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = 0;
    ms(a, 0, n - 1, ans);
    cout << ans << endl;
  }
}