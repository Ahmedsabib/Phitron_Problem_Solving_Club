#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  ll n, k;
  cin >> n >> k;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  ll low = 0, high = 1e10, ans = 0;
  while (low <= high) {
    ll mid = (high + low)/2;
    ll res = k, ok = 0;
    for (int i = 0; i < n; ++i) {
      ll x = a[i] * mid;
      if (x > b[i]) {
        res -= (x - b[i]);
      }
      if (res < 0) {
        ok = 1;
        break;
      }
    }
    if (!ok) {
      ans = mid;
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  cout << ans << '\n';
  return 0;
}
