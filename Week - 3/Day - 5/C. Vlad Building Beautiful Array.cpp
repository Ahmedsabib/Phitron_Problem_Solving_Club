#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int ca = 0, cb = 0;
    int pa = 1e9, pb = 1e9;
    for (int i = 0; i < n; i++) {
      if (v[i]%2 == 0) {
        ca++;
        pa = min(pa,v[i]);
      }
      else {
        cb++;
        pb = min(pb,v[i]);
      }
    }
    if ((ca == 0 || cb == 0) || pb < pa) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}
