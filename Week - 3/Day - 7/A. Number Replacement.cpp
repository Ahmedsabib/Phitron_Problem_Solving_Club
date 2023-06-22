#include <bits/stdc++.h>
using namespace std;
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
    string s;
    cin >> s;
    bool ok = false;
    for (int i = 0; i < n; ++i) {
      int x = a[i];
      ok = false;
      for (int j = i + 1; j < n; ++j) {
        if (x == a[j]) {
          if (s[j] != s[i]) {
            ok = true;
            break;
          }
        }
      }
      if (ok) {
        break;
      }
    }
    cout << (ok? "NO\n" : "YES\n");
  }
  return 0;
}
