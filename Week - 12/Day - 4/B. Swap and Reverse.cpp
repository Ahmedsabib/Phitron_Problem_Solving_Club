#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k%2 == 0) {
      sort(s.begin(), s.end());
      cout << s << '\n';
      continue;
    }
    vector<char> a, b;
    for (int i = 0; i < n; ++i) {
      if (i%2 == 0) {
        a.push_back(s[i]);
      }
      else {
        b.push_back(s[i]);
      }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int d = 0, e = 0;
    string ans = "";
    for (int i = 0; i < n; ++i) {
      if (i%2 == 0) {
        if (d < (int)a.size()) {
          ans += a[d++];
        }
        else if (e < (int)b.size()) {
          ans += b[e++];
        }
      }
      else {
        if (e < (int)b.size()) {
          ans += b[e++];
        }
        else if (d < (int)a.size()) {
          ans += a[d++];
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
