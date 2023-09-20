#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
      cin >> b[i];
    }
    ll res = 0, x = 0, y = 0;
    for (int i = 0; i < m; ++i) {
      res |= b[i];
    }
    for (int i = 0; i < n; ++i) {
      x ^= a[i];
      y ^= (a[i] | res);
    }
    cout << min(x, y) << ' ' << max(x, y) << '\n';
  }
  return 0;
}
