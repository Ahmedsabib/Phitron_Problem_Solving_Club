#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n, k;
    cin >> n >> k;
    if (k == 1 || k == n) {
      for (int i = 1; i <= n; ++i) {
        cout << i << ' ';
      }
      cout << '\n';
    }
    else {
      if (n%2 == 1) {
        int d = n;
        for (int i = 1; i <= n/2; ++i) {
          cout << d << ' ' << i << ' ';
          --d;
        }
        cout << n/2 + 1 << ' ';
        cout << '\n';
      }
      else {
        int d = n;
        for (int i = 1; i <= n/2; ++i) {
          cout << d << ' ' << i << ' ';
          --d;
        }
        cout << '\n';
      }
    }
  }
  return 0;
}
