#include <bits/stdc++.h>
#define pb push_back
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n-1; i >= a; --i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
typedef long long ll;
using namespace std;
void test_case(){
	ll a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld\n", a^b);
}
int main()
{
	ll T;
	scanf("%lld", &T);
	while(T--){
		test_case();
	}
}
 
