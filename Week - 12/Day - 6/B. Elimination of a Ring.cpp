#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int ok = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] != a[i&1]) {
        ok = 1;
        break;
      }
    }
    if (!ok) cout << n/2 + 1 << '\n';
    else cout << n << '\n';
  }
  return 0;
}
