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
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
      sum += abs(a[i]);
    }
    int ans = 0, ok = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] < 0) {
        ok = 1;
      }
      else {
        if (ok && a[i] == 0) {
          continue;
        }
        else if (ok && a[i] > 0) {
          ok = 0;
          ++ans;
        }
      }
    }
    if (ok) ++ans;
    cout << sum << ' ' << ans << '\n';
  }
  return 0;
}
