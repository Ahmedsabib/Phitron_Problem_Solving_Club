#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool check(ll mid, vector<ll> a, ll k) {
  ll res = 0;
  for (int i = 0; i < (int)a.size(); ++i) {
    res += min(a[i], mid);
  }
  return res >= (mid * k);
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int k, n;
  cin >> k >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  ll low = 0, high = 1e12, ans = 0;
  while (low <= high) {
    ll mid = low + (high - low)/2;
    if (check(mid, a, k)) {
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
