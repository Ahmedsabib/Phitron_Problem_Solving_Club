#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    string ans;
    int f;
    cin >> f;
    int l = f, ok = 0;
    ans.push_back('1');
    for (int i = 1; i < n; ++i) {
      int x;
      cin >> x;
      if (ok) {
        if (l <= x && x <= f) {
          ans += '1';
          l = x;
        }
        else {
          ans += '0';
        }
      }
      else {
        if (l <= x) {
          ans += '1';
          l = x;
        }
        else if (x <= f) {
          ans += '1';
          l = x;
          ok = 1;
        }
        else {
          ans += '0';
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
