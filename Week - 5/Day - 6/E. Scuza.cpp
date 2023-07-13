#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
      cin >> a[i];
    }
    vector<long long> pref_sum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
      pref_sum[i] = pref_sum[i - 1] + a[i];
    }
    vector<long long> pref_max(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
      pref_max[i] = max(pref_max[i - 1], a[i]);
    }
    while (q--) {
      long long u;
      cin >> u;
      long long y = upper_bound(pref_max.begin() + 1, pref_max.end(), u) - pref_max.begin() - 1;
      cout << pref_sum[y] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
