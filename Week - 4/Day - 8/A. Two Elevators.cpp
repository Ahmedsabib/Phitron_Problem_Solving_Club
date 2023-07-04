#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long a, b, c;
    cin >> a >> b >> c;
    long long x = abs(c - b);
    long long y = abs(c - 1) + x;
    if (y == (a - 1)) {
      cout << 3 << '\n';
    }
    else if (y < (a - 1)) {
      cout << 2 << '\n';
    }
    else {
      cout << 1 << '\n';
    }
  }
  return 0;
}
