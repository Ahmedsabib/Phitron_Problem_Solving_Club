#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    long long n;
    cin >> n;
    long long x = 1e6;
    if (n == 1) {
      cout << -1 << '\n';
    }
    else if (x >= n) {
      cout << 1 << ' ' << 1 << ' ' << n - 1 << '\n';
    }
    else if (n%x == 0) {
      cout << (n/x) - 1 << ' ' << x << ' ' << x << '\n';
    }
    else if (n > x) {
      cout << (n/x) << ' ' << x << ' ' << (n%x) << '\n';
    }
  }
  return 0;
}
