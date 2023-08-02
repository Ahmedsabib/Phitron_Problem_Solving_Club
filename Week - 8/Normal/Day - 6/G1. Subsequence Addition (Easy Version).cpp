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
    sort(a.begin(), a.end());
    int prev = 1, ok = 0;
    for (int i = 0; i < n; ++i) {
      if (i == 0) {
        if (a[0] != prev) {
          ok = 1;
        }
      }
      else {
        if (a[i] <= prev) {
          prev += a[i];
        }
        else {
          ok = 1;
        }
      }
    }
    cout << (ok? "NO\n" : "YES\n");
  }
  return 0;
}
