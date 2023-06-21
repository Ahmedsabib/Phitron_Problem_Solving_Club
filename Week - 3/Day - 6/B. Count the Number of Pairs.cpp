#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp1, mp2;
    for (int i = 0; i < n; ++i) {
      if (s[i] >= 'a' && s[i] <= 'z') {
        mp1[s[i]]++;
      }
      else {
        mp2[s[i]]++;
      }
    }
    long long ans = 0;
    for (int i = 0; i < 26; ++i) {
      char x = i + 'a', y = i + 'A';
      int res = min(mp1[x], mp2[y]);
      ans += res;
      mp1[x] -= res;
      mp2[y] -= res;
      while (mp1[x] > 1 && k > 0) {
        mp1[x] -= 2;
        ++ans;
        --k;
      }
      while (mp2[y] > 1 && k > 0) {
        mp2[y] -= 2;
        ++ans;
        --k;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
