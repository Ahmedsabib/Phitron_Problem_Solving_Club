#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> z;
    for (int i = 0; i < n - 1; i++) {
      z.insert(s.substr(i,2));
    }
    cout << z.size() << "\n";
  }
  return 0;
}
