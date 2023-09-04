#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
      cin >> b[i];
    }
    vector<long long> c(n);
    for (int i = 0; i < n; ++i) {
      c[i] = b[i] - a[i];
    }
    sort(c.begin(), c.end());
    int i = 0, j = n - 1, ans = 0, tot = 0;
    while (i < j) {
      tot = c[j] + c[i];
      if (tot >= 0) {
        ++ans;
        ++i;
        --j;
      }
      else if (tot < 0) {
        ++i;
      }
      else {
        --j;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
