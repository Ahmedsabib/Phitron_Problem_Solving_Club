#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    long long ans = 0;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
      a[i] -= i;
      ans += mp[a[i]];
      mp[a[i]]++;
    }
    cout << ans << '\n';
  }
  return 0;
}
