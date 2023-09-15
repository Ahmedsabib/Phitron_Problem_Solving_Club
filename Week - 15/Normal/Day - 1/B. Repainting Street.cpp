#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    ll mn = 1e9;
    for(int i = 1; i < 101; i++) {
      ll cnt = 0;
      for(int j = 0; j < n; ) {
        if(arr[j] != i) {
          j += k;
          cnt++;
        }
        else {
          j++;
        }
      }
      mn = min(mn,cnt);
    }
    cout << mn << '\n';
  }
  return 0;
}
