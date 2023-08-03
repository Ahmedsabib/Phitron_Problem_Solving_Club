#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0, i = 0, j = n - 1;
    while (i < j) {
      if (s[i] == s[j]) {
        break;
      }
      else {
        ++cnt;
        ++i;
        --j;
      }
    }
    cout << n - (cnt * 2) << '\n';
  }
  return 0;
}
