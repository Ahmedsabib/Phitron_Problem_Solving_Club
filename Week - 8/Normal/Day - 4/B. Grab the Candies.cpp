#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    int odd = 0, even = 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      if (a[i]&1) {
        odd += a[i];
      }
      else {
        even += a[i];
      }
    }
    if (even > odd) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}
