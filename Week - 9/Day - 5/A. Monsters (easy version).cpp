#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    sort(a.begin() + 1, a.end());
    ll ans = 0;
    for(int i = 1; i <= n; i++){
      if(a[i] <= a[i - 1] + 1) {
        continue;
      }
      ans += a[i] - a[i - 1] - 1;
      a[i] = a[i - 1] +  1;
    }
    cout << ans << '\n';
  }
}
