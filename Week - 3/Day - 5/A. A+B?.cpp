#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    string s;
    cin >> s;
    cout << (s[0] - '0') + (s[2] - '0') << '\n';
  }
  return 0;
}
