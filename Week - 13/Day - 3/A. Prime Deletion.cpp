#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    string s;
    cin >> s;
    int x = 0;
    int y = 0;
    for (int i = 0; i < 9; i++) {
      if (s[i] == '1') {
        x = i;
      }
      else if (s[i] == '7') {
        y = i;
      }
    }
    cout << (x < y ? 17 : 71) << '\n';
  }
  return 0;
}
