#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
      cin >> b[i];
    }
    int x = *min_element(a.begin(), a.end());
    int y = *min_element(b.begin(), b.end());
    int rows = 0;
    // for rows
    for (int i = 0; i < n; ++i) {
      rows += (a[i] + y);
    }
    // for columns
    int cols = 0;
    for (int i = 0; i < n; ++i) {
      cols += (b[i] + x);
    }
    cout << min(rows, cols) << '\n';
  }
  return 0;
}
