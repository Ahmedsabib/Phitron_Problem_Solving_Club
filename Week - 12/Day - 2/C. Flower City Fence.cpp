#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    long long maxi = 0;
    for (int i = 0; i < n; ++i) {
      maxi = max(maxi, a[i]);
    }
    if (maxi > n) {
      cout << "NO\n";
      continue;
    }
    map<long long, long long> mp;
    mp[0] += n;
    for (int i = 0; i < n; ++i) {
      mp[a[i]]--;
    }
    long long res = 0;
    for (int i = 0; i < n; ++i) {
      mp[i] += res;
      res = mp[i];
    }
    int ok = 0;
    for (int i = 0; i < n; ++i) {
      if (mp[i] != a[i]) {
        ok = 1;
        break;
      }
    }
    if (ok) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
