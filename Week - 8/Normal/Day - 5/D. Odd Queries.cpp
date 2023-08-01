#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    vector<long long> sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
      sum[i + 1] = sum[i] + a[i];
    }
    long long tot = sum[n];
    while (q--) {
      int l, r, k;
      cin >> l >> r >> k;
      if (r - l + 1 == n) {
        cout << ((k * n)&1? "YES\n":"NO\n");
        continue;
      }
      long long res = 0;
      if (l == 1) {
        res = sum[r];
      }
      else {
        res = sum[r] - sum[l - 1];
      }
      long long cur = tot - res;
      cur += k * (r - l + 1);
      if (cur&1) {
        cout << "YES\n";
      }
      else {
        cout << "NO\n";
      }
    }
  }
  return 0;
}
