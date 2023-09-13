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
    ll maxi = 0, mini = 1e9 + 7;
    for (int i = 0; i < n - 1; ++i) {
      if (a[i] < a[i + 1]) {
        mini = min(mini, (a[i] + a[i + 1])/2);
      }
      if (a[i] > a[i + 1]) {
        maxi = max(maxi, (a[i] + a[i + 1] + 1)/2);
      }
    }
    if (maxi <= mini) {
      cout << maxi << '\n';
    }
    else {
      cout << -1 << '\n';
    }
  }
  return 0;
}
