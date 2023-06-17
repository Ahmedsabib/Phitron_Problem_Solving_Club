#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
      cin >> s[i];
    }
    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
      mp[s[i]] = i;
    }
    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
      string t, tt;
      for (int j = 0; j < (int)s[i].size(); ++j) {
        t += s[i][j];
        tt = s[i].substr(j + 1, (int)s[i].size());
        if (mp.count(t) && mp.count(tt)) {
          ans[i] = 1;
          break;
        }
      }
    }
    for (int i = 0; i < n; ++i) {
      cout << ans[i];
    }
    cout << '\n';
  }
  return 0;
}
