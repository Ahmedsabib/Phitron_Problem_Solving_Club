#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if (a == b) {
      cout << "0\n";
    }
    else if (abs(a - b) >= x) {
      cout << "1\n";
    }
    else if (abs(l - a) >= x && abs(l - b) >= x) {
      cout << "2\n";
    }
    else if (abs(r - a) >= x && abs(r - b) >= x) {
      cout << "2\n";
    }
    else if (abs(l - a) >= x && abs(r - b) >= x) {
      cout << "3\n";
    }
    else if (abs(r - a) >= x && abs(l - b) >= x) {
      cout << "3\n";
    }
    else {
      cout << "-1\n";
    }
  }
  return 0;
}
