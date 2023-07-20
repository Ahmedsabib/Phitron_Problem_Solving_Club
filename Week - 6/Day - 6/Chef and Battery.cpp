#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    long long n;
    cin >> n;
    long long ans = 0;
    while (1) {
      if (n == 50) {
        break;
      }
      if (n < 50) {
        n += 2;
        ++ans;
      }
      else {
        n -= 3;
        ++ans;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
