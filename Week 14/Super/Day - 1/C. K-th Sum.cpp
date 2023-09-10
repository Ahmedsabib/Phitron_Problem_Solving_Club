#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll check(ll mid, vector<ll> a, vector<ll> b) {
  int n = (int)a.size();
  ll res = 0;
  for (int i = 0; i < n; ++i) {
    ll x = lower_bound(b.begin(), b.end(), mid - a[i]) - b.begin();
    --x;
    if (x >= 0 && x < n) {
      res += x + 1;
    }
  }
  return res;
}

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
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll high = a[n - 1] + b[n - 1], low = 0, ans = -1;
  while (low <= high) {
    ll mid = low + (high - low)/2;
    if (check(mid, a, b) <= k - 1) {
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
