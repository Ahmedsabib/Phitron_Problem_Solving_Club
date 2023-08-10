#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int j = 0; j < n; j++){
      cin >> a[j];
    }
    ll sum = 0;
    for (int j = 0; j < n; j++){
      sum += a[j];
    }
    if (sum % 2 == 0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
}
