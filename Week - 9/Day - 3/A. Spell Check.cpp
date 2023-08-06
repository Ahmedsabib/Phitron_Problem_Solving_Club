#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    string s;
    cin >> n >> s;
    bool ok = false;
    for (auto& ch: s) {
      if (ch == 't' || ch == 'T') {
        if (ch == 't') {
          ok = true;
        }
      }
      else {
        if (((int)ch >= 65) && (int)ch <= 90) {
          ok = true;
        }
      }
    }
    for (int i = 0; i < n; ++i) {
      s[i] = tolower(s[i]);
    }
    sort(s.begin(), s.end());
    if (s != "imrtu") {
      ok = true;
    }
    cout << (ok? "NO\n" : "YES\n");
  }
  return 0;
}
