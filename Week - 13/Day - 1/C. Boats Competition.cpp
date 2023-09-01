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
	map<int, int>mp;
	rep(i, 0, n){
		int x;
		scanf("%d", &x);
		mp[x]++;
	}
	int mx = 0;
	for(int i = 1; i <= (2*n); ++i){
		int total = 0;
		for(auto j: mp){
			int other = i-j.first;
			if(other >= 1 and mp.count(other)){
				total += min(j.second, mp[other]);
			}
		}
		total /= 2;
		mx = max(total, mx);
	}
	printf("%d\n", mx);
}
int main()
{
	int T;
	scanf("%d", &T);
	while(T--){
		test_case();
	}
}
