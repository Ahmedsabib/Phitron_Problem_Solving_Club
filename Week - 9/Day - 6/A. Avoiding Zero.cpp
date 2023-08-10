#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n-1; i >= a; --i)
#define mp make_pair
typedef long long ll;
using namespace std;
void test_case()
{
		int n;
		scanf("%d", &n);
		vector<int>a(n);
		int sum=0;
		rep(i, 0, n){
			scanf("%d", &a[i]);
			sum += a[i];
		}
		if(sum == 0){
			printf("NO\n");
		}
		else{
			sort(all(a));
			if(sum > 0) sort(rall(a));
			printf("YES\n");
			rep(i, 0, n){
				printf("%d ", a[i]);
			}
		}
}
int main()
{
	int tt;
	scanf("%d", &tt);
	while(tt--){
		test_case();
	}
}
