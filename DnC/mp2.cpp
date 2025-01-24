/*
 * Let A[1..n] = price for each day
 * Find max A[j] - A[i] where j > i
 */

#include <bits/stdc++.h>
using namespace std;

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
    int buy = a[0];
    for (int i = 1; i < n; i++) {
      ans = max(ans, a[i] - buy);
      buy = min(buy, a[i]);
    }

    // ms(a, 0, n - 1, ans);

    cout << ans << endl;
  }
}