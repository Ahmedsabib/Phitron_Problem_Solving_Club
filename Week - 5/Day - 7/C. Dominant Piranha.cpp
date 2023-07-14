#include <bits/stdc++.h>
#define pb push_back
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n-1; i >= a; --i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
typedef long long ll;
using namespace std;
void test_case(){
	int n;
	scanf("%d", &n);
	vector<int>a(n);
	rep(i, 0, n){
		scanf("%d", &a[i]);
	}
	int mx = *max_element(all(a));
	int ans = -1;
	rep(i, 0, n){
		if(a[i] != mx) continue;
		if(i > 0 and a[i-1] != mx) ans = i+1;
		if(i < n-1 and a[i+1] != mx) ans = i+1;
	}
	printf("%d\n",ans);
}
int main()
{
	int T;
	scanf("%d", &T);
	while(T--){
		test_case();
	}
}
