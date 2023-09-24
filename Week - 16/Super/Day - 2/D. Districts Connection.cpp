#include <bits/stdc++.h>
#define pb push_back
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n-1; i >= a; --i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
typedef long long ll;
using namespace std;
void test_case(){
	ll n;
	scanf("%lld", &n);
	ll a[n], x[n];
	for(ll i = 1; i <= n; ++i){
		scanf("%lld", &a[i]);
	}
	for(ll i = 1; i <= n; ++i){
		x[i] = a[i];
	}
	sort(x+1, x+1+n);
	if(x[1] == x[n]){
		printf("No\n");
	}
	else{
		ll cal = -1;
		printf("YES\n");
		for(int i = 2; i <= n; ++i){
			if(a[i] != a[1]){
				cal = i;
				cout << 1 << " " << i << endl;
			}
		}
		for(int i = 2; i <= n; ++i){
			if(a[i] == a[1]){
				cout << cal << " " << i << endl;
			}
		}
	}
}
int main()
{
	int T;
	scanf("%d", &T);
	while(T--){
		test_case();
	}
}
 
