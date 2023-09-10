#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if (a > b) {
      swap(a, b);
    }
    while (a < b) {
      ++ans;
      a += c;
      b -= c;
    }
    cout << ans << '\n';
  }
  return 0;
}
