#include <bits/stdc++.h>

using namespace std;

using ll =  long long;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    ll n;
    cin >> n;
    int pos = 0;
    for (int i = 30; i >= 0; --i) {
      if ((n >> i) & 1) {
        pos = i;
        break;
      }
    }
    vector<ll> ans;
    for (int i = 0; i <= pos; ++i) {
      ans.push_back(1 << i);
    }
    ll x = (1 << pos);
    for (int i = pos - 1; i >= 0; --i) {
      if ((n >> i) & 1) {
        x += (1 << i);
        ans.push_back(x);
      }
    }
    reverse(ans.begin(), ans.end());
    cout << (int)ans.size() << '\n';
    for (int i = 0; i < (int)ans.size(); ++i) {
      cout << ans[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
