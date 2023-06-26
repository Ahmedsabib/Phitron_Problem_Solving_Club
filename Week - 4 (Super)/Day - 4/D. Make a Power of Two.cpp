#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.size();
    int ans = n+1;
    for (int i = 0; i <= 60; ++i) {
      string str = to_string(1LL << i);
      int cnt = 0;
      for (auto& ch: s) {
        if (cnt < (int)str.size() && ch == str[cnt]) {
          ++cnt;
        }
      }
      int del = n - cnt;
      int add = (int)str.size() - cnt;
      ans = min(ans, add+del);
    }
    cout << ans << '\n';
  }
  return 0;
}
