#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    string s;
    cin >> s;
    string t;
    for (int i = 0; i < 51; ++i) {
      t += "Yes";
    }
    bool ok = true;
    int n = (int)s.size();
    for (int i = 0; i < (int)t.size() - n; ++i) {
      string tt = t.substr(i, n);
      if (tt == s) {
        ok = false;
        break;
      }
    }
    cout << (ok? "NO\n" : "YES\n");
  }
  return 0;
}
