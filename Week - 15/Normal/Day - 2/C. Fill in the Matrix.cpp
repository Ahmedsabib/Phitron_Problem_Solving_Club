#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, m;
    cin >> n >> m;
    if (m == 1) {
      cout << 0 << '\n';
      while (n--) {
        cout << 0 << '\n';
      }
      continue;
    }
    int ans = min(m, n + 1);
    cout << ans << '\n';
    for (int i = 1; i <= n; ++i) {
      if (i >= m) {
        for (int j = 0; j < m; ++j) {
          cout << j << ' ';
        }
        cout << '\n';
      }
      else {
        int d = m - (i - 1);
        for (int j = 0; j < m; ++j) {
          cout << d%m << ' ';
          d++;
        }
        cout << '\n';
      }
    }
  }
  return 0;
}
