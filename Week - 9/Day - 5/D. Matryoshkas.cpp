#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
      cin >> a[i];
    }
    vector<int> b;
    for (int i = 0; i < n; i++){
      b.push_back(a[i] - 1);
      b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    int m = b.size();
    vector<int> c(m, 0);
    for (int i = 0; i < n; i++){
      a[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
      c[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < m - 1; i++){
      ans += max(c[i + 1] - c[i], 0);
    }
    cout << ans << '\n';
  }
  return 0;
}
