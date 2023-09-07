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
    int n;
    scanf("%d", &n);
    vector<int>a(n+1);
    rep(i, 0, n){
      int x;
      scanf("%d", &x);
      a[x]++;
    }
    int cnt=0;
    for(int i = 1; i <= n; ++i){
      if(a[i] > 0) ++cnt;
    }
    int can = *max_element(all(a));
    if(can < cnt) printf("%d\n", can);
    else{
      if(cnt < can) printf("%d\n", cnt);
      else printf("%d\n", cnt-1);
    }
  }
  return 0;
}
