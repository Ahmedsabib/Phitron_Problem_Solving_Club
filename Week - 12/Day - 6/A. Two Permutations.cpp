#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, a, b;
    cin >> n >> a >> b;
    if (a == b && a == n) {
      cout << "YES\n";
    }
    else if (a + b < n - 1) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}
