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
    if (n&1) {
      cout << "NO\n";
      continue;
    }
    sort(a.begin(), a.end());
    vector<ll> ans;
    ans.push_back(a[0]);
    int d = 1;
    for (int i = n/2; i < n; ++i) {
      ans.push_back(a[i]);
      if (d < n/2) {
        ans.push_back(a[d++]);
      }
    }
    bool ok = true;
    for (int i = 0; i < n ; ++i) {
      if (i == 0) {
        if ((ans[i] < ans[1] && ans[i] < ans[n-1]) || (ans[i] > ans[1] && ans[i] > ans[n-1])) {
          continue;
        }
        else {
          ok = false;
        }
      }
      else if (i == n-1) {
        if ((ans[n-1] < ans[0] && ans[n-1] < ans[0]) || (ans[n-1] > ans[0] && ans[n-1] > ans[0])) {
          continue;
        }
        else {
          ok = false;
        }
      }
      else {
        if ((ans[i] < ans[i+1] && ans[i] < ans[i-1]) || (ans[i] > ans[i+1] && ans[i] > ans[i-1])) {
          continue;
        }
        else {
          ok = false;
        }
      }
    }
    if (ok) {
      cout << "YES\n";
      for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
      }
      cout << '\n';
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}
