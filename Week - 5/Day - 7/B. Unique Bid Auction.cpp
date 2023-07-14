#include <bits/stdc++.h>

#define pb push_back
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n; i >= a; --i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
typedef long long ll;

using namespace std;

void test_case(){
	int n;
	scanf("%d", &n);
	vector<int>a(n), arr;
	rep(i, 0, n){
		scanf("%d ", &a[i]);
		arr.pb(a[i]);
	}
	sort(all(arr));
	int ans = 0;
	bool flag = true;
	rep(i, 0, n){
		if(arr[i-1] != arr[i] and arr[i+1] != arr[i]){
			ans = arr[i];
			flag = false;
			break;
		}
	}
	int pos = 1;
	if(!flag){
		rep(i, 0, n){
			if(a[i] == ans){
				pos = i+1;
				break;
			}
		}
		printf("%d\n", pos);
	}
	else cout << "-1" << '\n';
}
int main()
{
	int T;
	scanf("%d", &T);
	while(T--){
		test_case();
	}
}
 
