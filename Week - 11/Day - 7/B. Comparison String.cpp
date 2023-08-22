#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<char> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int cnt = 1, maxi = 0;
    for (int i = 0; i < n - 1; ++i) {
      if (a[i] == a[i + 1]) {
        ++cnt;
      }
      else {
        maxi = max(maxi, cnt);
        cnt = 1;
      }
    }
    maxi = max(maxi, cnt);
    cout << maxi + 1 << '\n';
  }
  return 0;
}
