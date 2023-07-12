#include <bits/stdc++.h>

using namespace std;

const int N = (int)5e4 + 5;

bool used[N];

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int m;
    cin >> m;
    vector<vector<int>> a(m);
    for (int i = 0; i < m; i++) {
      int n;
      cin >> n;
      a[i].resize(n);
      for (int& x: a[i]) cin >> x;
    }
    vector<int> p(m, -1);
    for (int i = m-1; i >= 0; i--) {
      for (int x: a[i]) {
        if (!used[x]) p[i] = x;
        used[x] = 1;
      }
    }
    if (count(p.begin(), p.end(), -1) != 0) {
      cout << "-1\n";
    }
    else {
      for (int x: p) cout << x << ' ';
      cout << '\n';
    }
    for (int i = 0; i < m; i++) {
      for (int x: a[i]) used[x] = 0;
    }
  }
}
