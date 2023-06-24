#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long ans = 0;
    int l = 0, r = n - 1;
    while (l <= r) {
      ans += a[r] - a[l];
      --r;
      ++l;
    }
    cout << ans << '\n';
  }
  return 0;
}
