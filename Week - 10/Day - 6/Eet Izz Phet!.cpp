#include <bits/stdc++.h>

using namespace std;

const long long maxn = 10003193;

long long Hash(string s) {
  long long v = 0, mul = 1;
  int len = s.size();
  for(int i = 0; i < len; i++) {
    v = (v + (mul * s[i]));
    mul = (mul * maxn);
  }
  return v;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n;
  cin >> n;
  unordered_map<long long, long long> mp;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    mp[Hash(s)] = 1;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; ++i) {
    string t;
    cin >> t;
    if (mp[Hash(t)] == 1) {
      cout << "yes\n";
    }
    else {
      cout << "no\n";
    }
  }
  return 0;
}
