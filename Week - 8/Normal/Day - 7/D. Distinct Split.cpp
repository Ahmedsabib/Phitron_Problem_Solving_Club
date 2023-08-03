#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st1, st2;
    vector<int> pref(n, 0), suf(n, 0);
    for (int i = 0; i < n; ++i) {
      st1.insert(s[i]);
      pref[i] = (int)st1.size();
    }
    for (int i = n - 1; i >= 0; --i) {
      st2.insert(s[i]);
      suf[i] = (int)st2.size();
    }
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
      ans = max(ans, suf[i + 1] + pref[i]);
    }
    cout << ans << '\n';
  }
  return 0;
}
