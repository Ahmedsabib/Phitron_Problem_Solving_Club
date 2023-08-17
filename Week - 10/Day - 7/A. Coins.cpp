#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    long long n, k;
    cin >> n >> k;
    if (n%k == 0 || n%2 == 0) {
      cout << "YES\n";
    }
    else if ((n - k)%2 == 0 || (n - 2)%k == 0) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}
