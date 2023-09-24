#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      a[i]--;
    }
    vector<vector<int>> mat(k);
    for (int i = 0; i < n; ++i) {
      mat[a[i]].push_back(i);
    }
    vector<int> ans(k);
    int l = n, h = -1;
    for (int i = k - 1; i >= 0; --i) {
      for (auto& x: mat[i]) {
        h = max(h, x);
        l = min(l, x);
      }
      ans[i] = (mat[i].empty() ? 0 : 2 * (h - l + 1));
    }
    for (auto& x: ans) {
      cout << x << ' ';
    }
    cout << '\n';
  }
  return 0;
}
