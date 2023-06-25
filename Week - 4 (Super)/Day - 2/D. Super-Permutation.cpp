#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    if (n == 1) {
      cout << 1 << '\n';
      continue;
    }
    if (n&1) {
      cout << "-1\n";
      continue;
    }
    int d = n - 1, e = 2;
    vector<int> a;
    a.push_back(n);
    for (int i = 0; i < n - 1; ++i) {
      if (i%2 == 0) {
        a.push_back(d);
        d -= 2;
      }
      else {
        a.push_back(e);
        e += 2;
      }
    }
    for (auto& x: a) {
      cout << x << ' ';
    }
    cout << '\n';
  }
  return 0;
}
