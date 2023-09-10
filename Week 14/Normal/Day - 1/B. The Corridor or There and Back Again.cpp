#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    int ans = 1e9 + 7;
    for (int i = 0; i < n; ++i) {
      int d, s;
      cin >> d >> s;
      ans = min(ans, d + (s - 1)/2);
    }
    cout << ans << '\n';
  }
  return 0;
}
