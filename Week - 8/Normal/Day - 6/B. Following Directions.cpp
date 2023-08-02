#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = 0, ok = 0;
    for (int i = 0; i < n; ++i) {
      if (s[i] == 'L') {
        --x;
      }
      else if (s[i] == 'R') {
        ++x;
      }
      else if (s[i] == 'U') {
        ++y;
      }
      else if (s[i] == 'D') {
        --y;
      }
      if (x == 1 && y == 1) {
        ok = 1;
      }
    }
    cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}
