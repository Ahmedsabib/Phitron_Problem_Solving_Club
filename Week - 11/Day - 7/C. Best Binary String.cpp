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
    char prev = '?';
    for (int i = 0; i < n; ++i) {
      if (s[i] == '?') {
        if (prev == '?') {
          s[i] = '0';
        }
        else {
          s[i] = prev;
        }
      }
      prev = s[i];
    }
    cout << s << '\n';
  }
  return 0;
}
