#include <bits/stdc++.h>

using namespace std;

const string color = "WB";

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
      cin >> grid[i];
    }
    int cur = 0, ok = 0;
    for (int i = 0; i < n; ++i) {
      int cnt = 0;
      for (int j = 0; j < m; ++j) {
        if (grid[i][j] == 'U') {
          ++cnt;
          grid[i][j] = color[cur];
          cur ^= 1;
          grid[i + 1][j] = color[cur];
        }
      }
      if (cnt%2 & 1) {
        ok = 1;
        break;
      }
    }
    for (int i = 0; i < m; ++i) {
      int cnt = 0;
      for (int j = 0; j < n; ++j) {
        if (grid[j][i] == 'L') {
          ++cnt;
          grid[j][i] = color[cur];
          cur ^= 1;
          grid[j][i + 1] = color[cur];
        }
      }
      if (cnt%2 & 1) {
        ok = 1;
        break;
      }
    }
    if (ok) {
      cout << -1 << '\n';
    }
    else {
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
          cout << grid[i][j];
        }
        cout << '\n';
      }
    }
  }
  return 0;
}
