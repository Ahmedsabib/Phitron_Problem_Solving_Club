#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, k, x;
    cin >> n >> k >> x;
    if (k >= 1 && x != 1) {
      cout << "YES\n" << n << '\n';
      for (int i = 1; i <= n; ++i) {
        cout << 1 << ' ';
      }
      cout << '\n';
    }
    else {
      if (x != 2 && k >= 2) {
        if (n%2 == 0) {
          cout << "YES\n" << n/2 << '\n';
          for (int i = 1; i <= n/2; ++i) {
            cout << 2 << ' ';
          }
          cout << '\n';
        }
        else {
          if (x == 1) {
            if (k >= 3) {
              cout << "YES\n" << n/2 << '\n';
              for (int i = 1; i <= n/2 - 1; ++i) {
                cout << 2 << ' ';
              }
              cout << 3 << '\n';
            }
            else {
              cout << "NO\n";
            }
          }
          else {
            cout << "YES\n" << n/2 << '\n' << 1 << ' ';
            for (int i = 1; i <= n/2 - 1; ++i) {
              cout << 2 << ' ';
            }
            cout << '\n';
          }
        }
      }
      else {
        cout << "NO\n";
      }
    }
  }
  return 0;
}
