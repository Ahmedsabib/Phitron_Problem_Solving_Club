#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int ans = 0;
    vector<vector<int>> res(n, vector<int> (n, 0));
    vector<vector<int>> cur(n, vector<int> (n, 0));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (i == 0) {
          
        }
        else if (i == 1) {
          for (int k = max(0, j - 1); k <= min(j + 1, n - 1); ++k) {
            cur[i][j] ^= cur[i - 1][k];
          }
        }
        else {
          if (j == 0) {
            cur[i][j] ^= cur[i - 2][j];
          }
          else {
            cur[i][j] ^= cur[i - 1][j - 1];
          }
          if (j == n - 1) {
            cur[i][j] ^= cur[i - 2][j];
          }
          else {
            cur[i][j] ^= cur[i - 1][j + 1];
          }
          cur[i][j] ^= cur[i - 2][j];
          cur[i][j] ^= res[i - 1][j];
        }
        if (cur[i][j] ^ (a[i][j] - '0')) {
          ++ans;
          cur[i][j] ^= 1;
          res[i][j] ^= 1;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
