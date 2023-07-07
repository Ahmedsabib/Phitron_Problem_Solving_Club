#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    string s;
    cin >> s;
    int p;
    cin >> p;
    int n = (int)s.size();
    vector<pair<char, long long>> a;
    long long  sum = 0;
    for (int i = 0; i < n; ++i) {
      sum += s[i] - 'a' + 1;
      a.push_back({s[i], i});
    }
    sort(a.rbegin(), a.rend());
    int j = 0;
    while (sum > p) {
      long long x = a[j].second;
      sum -= a[j].first - 'a' + 1;
      s[x] = '*';
      ++j;
    }
    string ans;
    for (int i = 0; i < n; ++i) {
      if (s[i] != '*') {
        ans += s[i];
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
