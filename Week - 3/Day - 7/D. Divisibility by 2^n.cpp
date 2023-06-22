#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    cin >> n;
    int k = 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      k += __builtin_ctz(x);
      a[i] = __builtin_ctz(i + 1);
    }
    sort(a.rbegin(), a.rend());
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      if (k >= n) {
        break;
      }
      ++ans;
      k += a[i];
    }
    if (k >= n) {
      cout << ans << '\n';
    }
    else {
      cout << "-1\n";
    }
  }
  return 0;
}
