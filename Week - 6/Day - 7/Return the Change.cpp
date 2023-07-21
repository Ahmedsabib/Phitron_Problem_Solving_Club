#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    int x = n/10;
    int y = x * 10, z = (x + 1) * 10;
    if (abs(y - n) >= abs(z - n)) {
      cout << 100 - z << '\n';
    }
    else {
      cout << 100 - y << '\n';
    }
  }
  return 0;
}
