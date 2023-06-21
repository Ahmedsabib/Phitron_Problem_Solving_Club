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
    for (int i = 0; i < n; ++i) {
      s[i] = tolower(s[i]);
    }
    string ss = "";
    for (int i = 0; i < n - 1; ++i) {
      if (s[i] != s[i + 1]) {
        ss += s[i];
      }
    }
    ss += s[n - 1];
    cout << (ss == "meow"? "YES\n" : "NO\n");
  }
  return 0;
}
