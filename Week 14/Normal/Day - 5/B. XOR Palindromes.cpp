#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (int i = 0; i < n/2; ++i) {
      if (s[i] != s[n - i - 1]) {
        ++cnt;
      }
    }
    string ans = "";
    if (n%2 == 0) {
      for (int i = 0; i <= n; ++i) {
        if (i >= cnt && i <= (n - cnt) && cnt%2 == i%2) {
          ans += '1';
        }
        else {
          ans += '0';
        }
      }
    }
    else {
      for (int i = 0; i <= n; ++i) {
        if (i >= cnt && i <= (n - cnt)) {
          ans += '1';
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
