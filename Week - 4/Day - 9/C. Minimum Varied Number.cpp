#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int s;
    cin >> s;
    string ans;
    for (int j = 9; j >= 1; j--){
      if (s >= j){
        ans += (char) ('0' + j);
        s -= j;
      }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
  }
  return 0;
}
