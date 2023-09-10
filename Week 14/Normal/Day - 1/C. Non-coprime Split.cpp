#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int l, r;
    cin >> l >> r;
    int ans1 = -1, ans2 = -1, ok = 0;
    for (int i = max(4, l); i <= r; ++i) {
      for (int j = 2; j * j <= i; ++j) {
        if (i%j == 0) {
          ok = 1;
          ans1 = j;
          ans2 = i - j;
        }
      }
      if (ok) break;
    }
    if (ok) {
      cout << ans1 << ' ' << ans2 << '\n';
    }
    else {
      cout << -1 << '\n';
    }
  }
  return 0;
}
