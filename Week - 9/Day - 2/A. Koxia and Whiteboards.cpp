#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
      cin >> b[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; ++i) {
      int ok = 0;
      for (int j = 0; j < n; ++j) {
        if (a[j] < b[i]) {
          a[j] = b[i];
          ok = 1;
          break;
        }
      }
      if (!ok) {
        a[0] = b[i];
      }
      sort(a.begin(), a.end());
    }
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
      ans += a[i];
    }
    cout << ans << '\n';
  }
  return 0;
}
