#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> c(n);
    for (int i = 0; i < n; ++i) {
      cin >> c[i].first >> c[i].second;
    }
    ll ans = 1e18;
    ans = min(ans, abs(c[a - 1].first - c[b - 1].first) + abs(c[a - 1].second - c[b - 1].second));
    ll res = 1e18, cur = 1e18;
    for (int i = 0; i < k; ++i) {
      res = min(res, abs(c[i].first - c[a - 1].first) + abs(c[i].second - c[a - 1].second));
      cur = min(cur, abs(c[i].first - c[b - 1].first) + abs(c[i].second - c[b - 1].second));
    }
    ans = min(ans, res + cur);
    cout << ans << '\n';
  }
  return 0;
}
