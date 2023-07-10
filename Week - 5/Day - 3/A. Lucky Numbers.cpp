#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int l, r;
    cin >> l >> r;
    if (r >= 200 && r - l >= 200){
      cout << (r / 100 - 1) * 100 + 9 << endl;
    }
    else {
      int ans = 0, mx = -1;
      for (int i = l; i <= r; i++){
        int x = i;
        int a = 9, b = 0;
        while (x > 0){
          a = min(a, x % 10);
          b = max(b, x % 10);
          x /= 10;
        }
        if (b - a > mx){
          mx = b - a;
          ans = i;
        }
      }
      cout << ans << '\n';
    }
  }
  return 0;
}
