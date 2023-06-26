#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int k, n;
    cin >> k >> n;
    vector<int> d(k - 1, 1);
    int s = k;
    for (int j = 1; j < k - 1; j++){
      if (s + j <= n){
        d[j] += j;
        s += j;
      }
    }
    vector<int> a(k);
    a[0] = 1;
    for (int j = 0; j < k - 1; j++){
      a[j + 1] = a[j] + d[j];
    }
    for (int j = 0; j < k; j++){
      cout << a[j];
      if (j < k - 1){
        cout << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}
