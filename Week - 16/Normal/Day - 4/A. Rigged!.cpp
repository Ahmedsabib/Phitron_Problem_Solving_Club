#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main() {
  ios::sync_with_stdio(0), cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> s(n), e(n);
    int ok = 1;
    for (int i = 0; i < n; i++) {
      cin >> s[i] >> e[i];
      if (i > 0 && s[i] >= s[0] && e[i] >= e[0]) {
        ok = 0;
      }
    }
    cout << (ok ? s[0] : -1) << "\n";
  }
  return 0;
}
