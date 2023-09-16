#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
      sum += a[i];
    }
    if (sum%n != 0) {
      cout << "NO\n";
      continue;
    }
    ll avg = sum/n;
    vector<ll> freq(35, 0);
    int ok = 0;
    for (int i = 0; i < n; ++i) {
      ll res = a[i] - avg;
      if (res == 0) {
        continue;
      }
      ll add = -1, del = -1;
      for (int j = 0; j < 30; ++j) {
        ll k = res + (1LL << j);
        ll on = __builtin_ctzll(k);
        if (k > 0 && __builtin_popcount(k) == 1) {
          add = j;
          del = on;
        }
      }
      if (add == -1) {
        ok = 1;
        break;
      }
      freq[add]++;
      freq[del]--;
    }
    for (int i = 0; i < (int)freq.size(); ++i) {
      if (freq[i]) {
        ok = 1;
        break;
      }
    }
    if (ok) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
