#include <bits/stdc++.h>

using namespace std;

const string PI = "314159265358979323846264338327";

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < min((int)PI.size(), (int)s.size()); i++) {
      if (s[i] != PI[i]) break;
      ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}
