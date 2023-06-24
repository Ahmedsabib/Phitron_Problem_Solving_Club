#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    long long n;
    cin >> n;
    long long ans = n;
    while (n) {
      n /= 2;
      ans += n;
    }
    cout << ans << '\n';
  }
  return 0;
}
