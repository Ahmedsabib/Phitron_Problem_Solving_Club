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
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    if (n%2 == 0) {
      cout << 2 << '\n';
      cout << 1 << ' ' << n << '\n';
      cout << 1 << ' ' << n << '\n';
    }
    else {
      cout << 4 << '\n';
      cout << 1 << ' ' << n - 1 << '\n';
      cout << 1 << ' ' << n - 1 << '\n';
      cout << n - 1 << ' ' << n << '\n';
      cout << n - 1 << ' ' << n << '\n';
    }
  }
  return 0;
}
