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
  vector<pair<ll, ll>> b;
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    b.push_back({u, v});
  }
  sort(b.begin(), b.end());
  vector<ll> sum(m + 1, 0), c(m);
  for (int i = 0; i < m; ++i) {
    sum[i + 1] = sum[i] + b[i].second;
    c[i] = b[i].first;
  }
  for (int i = 0; i < n; ++i) {
    ll pos = upper_bound(c.begin(), c.end(), a[i]) - c.begin();
    cout << sum[pos] << ' ';
  }
  cout << '\n';
  return 0;
}
