#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, k, x;
    cin >> n >> k >> x;
    if (n + 1 < k || k > x + 1) {
      cout << -1 << '\n';
      continue;
    }
    vector<int> a;
    int sum = 0, d = 0, ok = 0, ind = -1;
    if (x == k) {
      for (int i = 0; i < n; ++i) {
        a.push_back(d);
        if (d != x - 1) d++;
      }
    }
    else {
      for (int i = 0; i < n; ++i) {
        a.push_back(d);
        if (d + 1 == k) ok = 1;
        if (ok) d = x;
        else d++;
      }
    }
    int flag = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] > x) flag = 1;
      if (a[i] != i) {
        if (ind == -1) ind = i;
      }
    }
    if (ind == -1) ind = n;
    if (flag || ind != k) cout << -1 << '\n';
    else {
      for (int i = 0; i < n; ++i) {
        sum += a[i];
      }
      cout << sum << '\n';
    }
  }
  return 0;
}
