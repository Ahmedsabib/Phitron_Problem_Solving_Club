#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long n;
    string s;
    cin >> n >> s;
    vector<bool> found(n, false);
    long long ans = 0, start = 1;
    while (start <= n) {
      for (int i = start; i <= n; i += start) {
        if (s[i - 1] != '0') {
          break;
        }
        if (!found[i - 1]) {
          found[i - 1] = true;
          ans += start;
        }
      }
      ++start;
    }
    cout << ans << '\n';
  }
  return 0;
}
