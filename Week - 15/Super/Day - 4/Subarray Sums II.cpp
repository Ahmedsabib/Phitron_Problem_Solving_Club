#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
 
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  map<ll, ll> mp;
  ll sum = 0, ans = 0;
  for (int i = 0; i < n; ++i) {
    sum += a[i];
    if (sum == m) {
      ++ans;
    }
    if (mp.find(sum - m) != mp.end()) {
      ans += mp[sum - m];
    }
    mp[sum]++;
  }
  cout << ans << '\n';
  return 0;
}
