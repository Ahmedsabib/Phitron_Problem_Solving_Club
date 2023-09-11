#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    ll n;
    cin >> n;
    ll ans = 1;
    for (ll d = 1; d * d <= n; d++) {
      if (n % d == 0) {
        if (d <= n / 2) {
          ans = max(ans, d);
        }
        if (n / d <= n / 2) {
          ans = max(ans, n / d);
        }
      }
    }
    cout << ans << ' ' << n - ans << '\n';
  }
  return 0;
}
