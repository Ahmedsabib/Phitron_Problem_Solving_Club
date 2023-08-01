#include <bits/stdc++.h>

using namespace std;

bool check(string s) {
  for (int i = 0; i < (int)s.size() - 1; ++i) {
    if (s[i] == s[i + 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    string s;
    cin >> n >> s;
    int ok = 0;
    for (int i = 0; i < n - 1; ++i) {
      if (s[i] == s[i + 1]) {
        ok = 1;
        break;
      }
    }
    if (ok) {
      cout << "NO\n";
      continue;
    }
    map<char, int> mp;
    mp[s[0]] = 0;
    mp[s[1]] = 1;
    for (int i = 2; i < n; ++i) {
      if (mp[s[i - 1]] == 0) {
        mp[s[i]] = 1;
      }
      else {
        mp[s[i]] = 0;
      }
    }
    string new_str = "";
    for (int i = 0; i < n; ++i) {
      new_str += mp[s[i]];
    }
    if (check(new_str)) {
      cout << "YES\n";
      continue;
    }
    mp[s[0]] = 1;
    mp[s[1]] = 0;
    for (int i = 2; i < n; ++i) {
      if (mp[s[i - 1]] == 0) {
        mp[s[i]] = 1;
      }
      else {
        mp[s[i]] = 0;
      }
    }
    new_str = "";
    for (int i = 0; i < n; ++i) {
      new_str += mp[s[i]];
    }
    cout << (check(new_str)? "YES\n" : "NO\n");
  }
  return 0;
}
