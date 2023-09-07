#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long n, m;
    cin >> n >> m;
    if (m < n || (n%2 == 0 && m%2 == 1)) {
      cout << "NO\n";
    }
    else {
      cout << "YES\n";
      if (n%2 == 0) {
        for (int i = 1; i <= n - 2; ++i) {
          cout << 1 << ' ';
        }
        cout << (m - n + 2)/2 << ' ' << (m - n + 2)/2 << '\n';
      }
      else {
        for (int i = 1; i <= n - 1; ++i) {
          cout << 1 << ' ';
        }
        cout << m - n + 1 << '\n';
      }
    }
  }
  return 0;
}
