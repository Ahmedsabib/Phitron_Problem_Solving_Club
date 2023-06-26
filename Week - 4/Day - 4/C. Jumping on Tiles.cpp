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
    map<char, vector<long long>> a;
    for (int i = 1; i < n - 1; ++i) {
      a[s[i]].push_back(i + 1);
    }
    char x = s[0], y = s[n - 1];
    if (x > y) {
      long long ans = 0;
      for (char i = x; i >= y; --i) {
        ans += a[i].size();
      }
      ans += 2;
      long long tot = x - y;
      cout << tot << ' ' << ans << '\n' << 1 << ' ';
      for(char i = x; i >= y; --i) {
        for(auto& it: a[i]) {
          cout << it << ' ';
        }
      }
      cout << n << '\n';
    }
    else {
      long long ans = 0;
      for (char i = x; i <= y; ++i) {
        ans += a[i].size();
      }
      ans += 2;
      long long tot = y - x;
      cout << tot << ' ' << ans << '\n' << 1 << ' ';
      for(char i = x; i <= y; ++i) {
        for(auto& it: a[i]) {
          cout << it << ' ';
        }
      }
      cout << n << '\n';
    }
  }
  return 0;
}
