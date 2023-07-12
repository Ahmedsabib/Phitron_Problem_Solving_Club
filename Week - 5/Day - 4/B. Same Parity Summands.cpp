#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <string>
#include <queue>
#include <set>
#include <vector>
#include <map>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n-1; i >= a; --i)
#define mp make_pair
typedef long long ll;
using namespace std;
int main()
{
	int tt;
	scanf("%d", &tt);
	while(tt--){
		ll n, k;
		scanf("%lld%lld", &n, &k);
		ll x = k-1;
		if((n-(x*2)) > 0 && (n-(x*2))%2 == 0){
			printf("YES\n");
			for(int i= 0; i < x; ++i){
				printf("2 ");
			}
			printf("%lld\n", n-(x*2));
		}
		else if((n-(x*1)) > 0 && (n-(x*1))%2 != 0){
			printf("YES\n");
			for(int i = 0; i < x; ++i){
				printf("1 ");
			}
			printf("%lld\n", n-x);
		}
		else{
			printf("NO\n");
		}
	}
}
 
