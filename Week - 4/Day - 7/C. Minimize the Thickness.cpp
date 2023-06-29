#include <bits/stdc++.h>
using namespace std;
const int inf = (int)1e9 + 5;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    long long sum = 0, ans = inf;
    for (int i = 0; i < n; ++i) {
      sum += a[i];
      long long total = 0, cnt = 0, maxi = i + 1, every = i + 1;
      for (int j = i + 1; j < n; ++j) {
        total += a[j];
        ++cnt;
        if (total > sum) {
          break;
        }
        else if (total == sum) {
          maxi = max(maxi, cnt);
          every += cnt;
          cnt = 0;
          total = 0;
        }
      }
      if (every == n) {
        ans = min(ans, maxi);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
