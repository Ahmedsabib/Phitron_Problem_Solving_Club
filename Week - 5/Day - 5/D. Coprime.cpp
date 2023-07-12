#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
  return b ? gcd(b, a%b) : a;
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    map<long long, long long> mp;
    for (int i = 0; i < n; ++i) {
      if (mp[a[i]] == 0) {
        mp[a[i]] = i + 1;
      }
      else {
        mp[a[i]] = max((long long)(i + 1), mp[a[i]]);
      }
    }
    long long ans = 0;
    for (int i = 1; i <= 1000; ++i) {
      for (int j = 1; j <= 1000; ++j) {
        if (gcd(i, j) == 1 && mp[i] > 0 && mp[j] > 0) {
          ans = max(ans, (long long)(mp[i] + mp[j]));
        }
      }
    }
    cout << (ans == 0? -1 : ans) << '\n';
  }
  return 0;
}
