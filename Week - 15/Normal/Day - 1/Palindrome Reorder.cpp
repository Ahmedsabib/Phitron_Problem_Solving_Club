#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  string s;
  cin >> s;
  int n = (int)s.size();
  map<char, string> mp;
  for (int i = 0; i < n; ++i) {
    if (mp.count(s[i])) {
      mp[s[i]] += s[i];
    }
    else {
      mp[s[i]] = s[i];
    }
  }
  string last = "", first = "", odd = "";
  for (auto& x: mp) {
    if (x.second.size()%2 == 1 && odd != "") {
      cout << "NO SOLUTION" << '\n';
      return 0;
    }
    else if (x.second.size()%2 == 1) {
      odd = x.second;
    }
    else {
      first = x.second.substr(0, x.second.size()/2) + first;
      last += x.second.substr(0, x.second.size()/2);
    }
  }
  cout << last + odd + first << '\n';
}
