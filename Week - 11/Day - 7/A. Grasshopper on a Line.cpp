#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    long long n, k;
    cin >> n >> k;
    if (n%k != 0) {
      cout << 1 << '\n' << n << '\n';
    }
    else {
      cout << 2 << '\n' << n - 1 << ' ' << 1 << '\n';
    }
  }
  return 0;
}
