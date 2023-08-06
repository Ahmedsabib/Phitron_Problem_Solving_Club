#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    ll ans = 1;
    ll res = 0;
    for (int i = 0; i < n - 1; i++) {
      ll d = a[i+1] - a[i];
      if (d > 0) {
        if (res != 1) ans++;
        res = 1;
      }
      else if (d < 0) {
        if (res != -1) ans++;
        res = -1;
      }
    }
    cout << ans << '\n';
  }
}
