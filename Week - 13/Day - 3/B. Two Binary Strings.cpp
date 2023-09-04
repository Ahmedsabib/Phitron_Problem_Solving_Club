#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    string s, t;
    cin >> s >> t;
    bool ok = 0;
    for (int i = 0; i + 1 < (int)s.size(); i++) {
      if (s[i] == '0' && t[i] == '0' && s[i+1] == '1' && t[i+1] == '1') {
        ok = 1;
      }
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
  return 0;
}
