#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    vector<int> a(4);
    for (auto& x: a) {
      cin >> x;
    }
    int mn = min_element(a.begin(), a.begin() + 4) - a.begin();
    int mx = max_element(a.begin(), a.begin() + 4) - a.begin();
    cout << (mn + mx == 3 ? "YES" : "NO") << '\n';
  }
  return 0;
}
