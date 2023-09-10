#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll lcm(ll a, ll b) {
  return a / gcd(a, b) * b;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    ll n, x, y;
    cin >> n >> x >> y;
    ll ans = 0;
    ll a = n/x - n/lcm(x, y);
    ll b = n/y - n/lcm(x, y);
    ans += (n + n - (a - 1)) * a/2;
    ans -= (1 + b) * b /2;
    cout << ans << '\n';
  }
  return 0;
}
