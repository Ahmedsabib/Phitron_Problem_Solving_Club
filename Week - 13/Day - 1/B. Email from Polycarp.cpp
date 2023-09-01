#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    string s, t;
    cin >> s >> t;
    int n = (int)s.size(), m = (int)t.size();
    vector<pair<char, int>> v;
    int cnt = 1;
    for (int i = 0; i < n; ++i) {
      if (i + 1 < n && s[i] == s[i + 1]) {
        ++cnt;
      }
      else {
        v.push_back({s[i], cnt});
        cnt = 1;
      }
    }
    int cur = 1, d = 0, ok = 0;
    for (int i = 0; i < m; ++i) {
      if (i + 1 < m && t[i] == t[i + 1]) {
        ++cur;
      }
      else {
        if (t[i] == v[d].first && v[d].second <= cur) {
          cur = 1;
          d++;
        }
        else {
          ok = 1;
          break;
        }
      }
    }
    if (ok || d != (int)v.size()) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
