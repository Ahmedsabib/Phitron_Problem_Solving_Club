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
		scanf("%d ", &a[i]);
	}
	int64_t ans = 0;
	for(int j = 29; j >= 0; --j){
		int64_t cnt = 0;
		for(int i = 0; i < n; ++i){
			if(a[i] >= (1<<j) and a[i] < (1<<(j+1))){
				++cnt;
			}
		}
		ans += cnt*(cnt-1)/2;
	}
	cout << ans << endl;
}
int main()
{
	int T;
	scanf("%d", &T);
	while(T--){
		test_case();
	}
}
