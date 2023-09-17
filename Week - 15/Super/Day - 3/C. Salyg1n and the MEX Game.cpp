#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll mex = -1;
    for (int i = 0; i < n; ++i) {
      if (a[i] != i) {
        mex = i;
        break;
      }
    }
    if (mex == -1) {
      mex = n;
    }
    cout << mex << '\n';
    while (1) {
      ll cur;
      cin >> cur;
      if (cur == -1) {
        break;
      }
      cout << cur << '\n';
    } 
  }
  return 0;
}
