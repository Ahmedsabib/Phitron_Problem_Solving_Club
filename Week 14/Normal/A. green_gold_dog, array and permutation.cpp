#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    vector<pair<ll, ll>> b;
    for (int i = 0; i < n; ++i) {
      b.push_back({a[i], i});
    }
    sort(b.rbegin(), b.rend());
    int d = 1;
    for (int i = 0; i < n; ++i) {
      b[i].first = d++;
    }
    vector<ll> ans(n);
    for (int i = 0; i < n; ++i) {
      ans[b[i].second] = b[i].first;
    }
    for (int i = 0; i < n; ++i) {
      cout << ans[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
