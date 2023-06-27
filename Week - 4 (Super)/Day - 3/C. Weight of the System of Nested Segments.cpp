#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, m;
    cin >> n >> m;
    vector<array<int, 3>> a(m);
    for (int i = 0; i < m; ++i) {
      cin >> a[i][1] >> a[i][0];
      a[i][2] = i + 1;
    }
    sort(a.begin(), a.end());
    vector<pair<int, int>> b;
    long long ans = 0;
    for (int i = 0; i < 2 * n; ++i) {
      ans += a[i][0];
      b.push_back({a[i][1], a[i][2]});
    }
    cout << ans << '\n';
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i) {
      cout << b[i].second << ' ' << b[2 * n - i - 1].second << '\n';
    }
  }
  return 0;
}
