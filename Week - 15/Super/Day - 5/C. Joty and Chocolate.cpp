#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
  return b ? gcd(b, a%b) : a;
}

ll lcm(ll a, ll b) {
  return a / gcd(a, b) * b;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  ll n, a, b, p, q;
  cin >> n >> a >> b >> p >> q;
  ll ans = 0;
  ans += (n/a) * p;
  ans += (n/b) * q;
  ans -= min(p, q) * (n/lcm(a, b));
  cout << ans << '\n';
  return 0;
}
