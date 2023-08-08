#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n-1; i >= a; --i)
#define mp make_pair
typedef long long ll;
using namespace std;
void test_case(){
	int n;
		scanf("%d", &n);
		for(int i = 0; i <= 150; ++i){
			int left = n- (7*i);
			for(int j = 0; j <= 250; ++j){
				int left1 = left-(5*j);
				if(left1 >= 0 and left1 % 3 == 0){
					cout<<(left1/3)<<" "<<j<<" "<<i<<"\n";
					return;
				}
			}
		}
		printf("-1\n");
}
int main()
{
	int tt;
	scanf("%d", &tt);
	while(tt--){
		test_case();
	}
} 
