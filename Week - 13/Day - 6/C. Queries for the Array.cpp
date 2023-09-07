#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    string s;
    cin >> s;
    int n = (int)s.size();
    int f = 0, cnt = 0;
    int maxi_pos = 0, mini_pos = 0;
    for (int i = 0; i < n; ++i) {
      if (s[i] == '+') {
        ++cnt;
      }
      else if (s[i] == '-') {
        --cnt;
        maxi_pos = min(maxi_pos, cnt);
        if (cnt < mini_pos) {
          mini_pos = 0;
        }
      }
      else if (s[i] == '1') {
        maxi_pos = max(maxi_pos, cnt);
      }
      else {
        if (cnt <= 1) {
          f = 1;
          break;
        }
        if (mini_pos == 0 || mini_pos > cnt) {
          mini_pos = cnt;
        }
      }
      if (mini_pos <= maxi_pos && mini_pos != 0) {
        f = 1;
        break;
      }
    }
    if (f) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
