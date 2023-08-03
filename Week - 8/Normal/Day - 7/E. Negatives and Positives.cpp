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
    long long ans = 0, neg = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] < 0) {
        neg++;
        a[i] = -1 * a[i];
      }
      ans += a[i];
    }
    sort(a.begin(), a.end());
    cout << (neg%2 == 1? (ans - 2 * a[0]) : ans) << '\n';
  }
  return 0;
}
