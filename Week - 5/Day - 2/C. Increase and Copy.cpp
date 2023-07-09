#include <bits/stdc++.h>
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
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int t = sqrt(n);
		if(t*t >= n) printf("%d\n", 2*t-2);
		else if((t+1)*t >= n) printf("%d\n", 2*t-1);
		else if((t+1)*(t+1) >= n) printf("%d\n", 2*t);
	}
}
