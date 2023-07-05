#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    string s;
    cin >> s;
    int n = (int)s.size();
    map<char, long long> mp;
    long long ans = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
      if (mp[s[i]] == 0) {
        mp[s[i]]++;
        ++cnt;
      }
      if (cnt == 4) {
        cnt = 1;
        mp.clear();
        mp[s[i]]++;
        ++ans;
      }
    }
    if (cnt >= 1) {
      ++ans;
    }
    cout << ans << '\n';
  }
  return 0;
}
