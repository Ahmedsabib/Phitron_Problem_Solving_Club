#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n-1; i >= a; --i)
#define mp make_pair
typedef long long ll;

using namespace std;

int main() {
  int tt;
  scanf("%d", &tt);
  while(tt--){
    ll n, k;
    scanf("%lld%lld", &n, &k);
    ll r = (k-1) / (n-1);
    printf("%d\n", r+k);
  }
}
