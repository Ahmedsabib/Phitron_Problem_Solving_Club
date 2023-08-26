#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    string s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int maxi = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
      if (s[i] == '0') {
        maxi = a[i];
      }
      else {
        if (maxi > a[i]) {
          ans += maxi;
          maxi = a[i];
        }
        else {
          ans += a[i];
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
