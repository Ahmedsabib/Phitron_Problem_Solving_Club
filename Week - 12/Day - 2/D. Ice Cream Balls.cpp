#include <bits/stdc++.h>

using namespace std;

long long check(long long x) {
  return (x * (x + 1))/2;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    long long n;
    cin >> n;
    long long x = sqrt(2 * n);
    x -= 3;
    while (n >= check(x)) {
      ++x;
    }
    cout << (((3 - x) * x)/2) + n << '\n';
  }
  return 0;
}
