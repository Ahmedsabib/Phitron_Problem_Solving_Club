#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    if (n&1) {
      for (int i = 1; i <= n; ++i) {
        cout << i << ' ';
      }
      cout << '\n';
    }
    else {
      long long x = (n * (n + 1))/2;
      x--;
      long long y = 0;
      y = (((x/n) + 1) * n) - x;
      for (int i = 1; i <= n; ++i) {
        if (i == 1) {
          cout << y << ' ';
        }
        else {
          cout << i << ' ';
        }
      }
      cout << '\n';
    }
  }
  return 0;
}
