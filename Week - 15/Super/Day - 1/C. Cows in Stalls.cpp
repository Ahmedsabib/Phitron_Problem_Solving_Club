#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n, k;
  cin >> n >> k;
  vector<ll> x(n);
  for (int i = 0; i < n; ++i) {
    cin >> x[i];
  }
  ll low = 0, high = 2e9 + 7, ans = 0;
  while (low <= high) {
    ll mid = low + (high - low)/2;
    ll res = 1, i = 0;
    while (i < n) {
      ll ind = lower_bound(x.begin() + i + 1, x.end(), x[i] + mid) - x.begin();
      if (ind < n && ind > i) {
        i = ind;
        ++res;
      }
      else {
        break;
      }
    }
    if (res >= k) {
      ans = mid;
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  cout << fixed << setprecision(10) << ans << '\n';
  return 0;
}
