#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < n; j++) {
        if ((i+j)&1) {
          cout << n-j << ' ';
        }
        else {
          cout << (j == n-1 ? 2*n : 2*n-1-j) << ' ';
        }
      }
      cout << '\n';
    }
  }
  return 0;
}
