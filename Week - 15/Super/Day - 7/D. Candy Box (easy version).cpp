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
    int maxi = 0;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
      maxi = max(maxi, a[i]);
      mp[a[i]]++;
    }
    vector<int> b;
    for (int i = 1; i <= maxi; ++i) {
      b.push_back(mp[i]);
    }
    sort(b.rbegin(), b.rend());
    int prev = b[0];
    long long ans = prev;
    for (int i = 1; i < (int)b.size(); ++i) {
      int x = max(min(prev - 1, b[i]), 0);
      ans += x;
      prev = x;
    }
    cout << ans << '\n';
  }
  return 0;
}
