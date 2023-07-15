#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    long long ans = 1e18;
    for (int i = 1; i < n - 1; ++i) {
      long long x = abs(a[i] - a[i - 1]);
      long long y = abs(a[i] - a[i + 1]);
      ans = min(ans, max(x, y));
    }
    ans = min(ans, abs(a[0] - a[1]));
    ans = min(ans, abs(a[n - 1] - a[n - 2]));
    cout << ans << '\n';
  }
  return 0;
}
