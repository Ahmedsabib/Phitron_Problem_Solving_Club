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
    rep(i, 0, n){
      rep(j, 0, n){
        if(i == j or (j+1)%n == i){
          printf("1 ");
        }
        else{
          printf("0 ");
        }
      }
      printf("\n");
    }
  }
}
