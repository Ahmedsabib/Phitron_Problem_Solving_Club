#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    char x;
    cin >> n >> x;
    string s;
    cin >> s;
    if (x == 'g') {
      cout << "0\n";
      continue;
    }
    int pos = -1;
    for (int i = 0; i < n; ++i) {
      if (s[i] == 'g') {
        pos = i;
        break;
      }
    }
    bool ok = false;
    long long ans = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
      if (s[i] == x) {
        ok = true;
        ++cnt;
      }
      else if (s[i] == 'g') {
        ans = max(ans, cnt);
        cnt = 0;
        ok = false;
      }
      else {
        if (ok) {
          ++cnt;
        }
      }
    }
    if (cnt != 0) {
      ans = max(ans, cnt + pos);
    }
    cout << ans << '\n';
  }
  return 0;
}
