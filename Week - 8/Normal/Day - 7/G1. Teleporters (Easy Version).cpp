#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, c;
    cin >> n >> c;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    vector<long long> b(n);
    for (int i = 0; i < n; ++i) {
      b[i] = a[i] + i + 1;
    }
    sort(b.begin(), b.end());
    long long ans = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
      if (sum + b[i] > c) {
        break;
      }
      else {
        sum += b[i];
        ++ans;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
