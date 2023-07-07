#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    long long p = x - a, q = y - b;
    if (a <= x && b <= y && c >= p + q) {
      cout << "YES\n";
    }
    else if (a >= x && b >= y) {
      cout << "YES\n";
    }
    else if (a >= x) {
      if (b < y && c >= q) {
        cout << "YES\n";
      }
      else {
        cout << "NO\n";
      }
    }
    else if (b >= y) {
      if (a < x && c >= p) {
        cout << "YES\n";
      }
      else {
        cout << "NO\n";
      }
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}
