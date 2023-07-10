#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int a, sum, n;
    cin >> n;
    sum = 0;
    for(int i = 0; i < n; i++) {
      cin >> a;
      sum += a;
    }
    cout << (sum + n - 1) / n << '\n';
  }
  return 0;
}
