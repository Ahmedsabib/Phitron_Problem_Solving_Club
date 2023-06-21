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
    int ans = n - 1;
    for (int i = 0; i + 2 < n; i++) {
      ans -= (s[i] == s[i+2]);
    }
    cout << ans << '\n';
  }
  return 0;
}
