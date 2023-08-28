#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> a(n);
    a[0] = y, a[n - 1] = x;
    int d = 1;
    for (int i = 1; i < n - 1; ++i) {
      a[i] = a[i - 1] - d;
      d++;
    }
    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; ++i) {
      b[i] = a[i] - a[i + 1];
    }
    int ok = 0;
    for (int i = 0; i < n - 2; ++i) {
      if (b[i] >= b[i + 1]) {
        ok = 1;
        break;
      }
    }
    if (!ok) {
      for (int i = n - 1; i >= 0; --i) {
        cout << a[i] << ' ';
      }
      cout << '\n';
    }
    else {
      cout << -1 << '\n';
    }
  }
  return 0;
}
