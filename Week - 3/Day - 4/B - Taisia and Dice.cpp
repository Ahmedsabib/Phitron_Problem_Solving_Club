#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, s, r;
    cin >> n >> s >> r;
    vector<int> a(n);
    a[0] = s - r;
    for (int j = 1; j < n; j++){
      a[j] = min(a[0], r - (n - 1 - j));
      r -= a[j];
    }
    for (int j = 0; j < n; j++){
      cout << a[j];
      if (j < n - 1){
        cout << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}
