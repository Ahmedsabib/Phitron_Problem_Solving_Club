#include <bits/stdc++.h>
#define pb push_back
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n-1; i >= a; --i)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
void test_case(){
	string s;
	cin >> s;
	int n = s.size();
	string rem;
	rep(i, 0, n){
		char ch = s[i];
		if(!rem.empty() and rem.back() == 'A' and ch == 'B'){
			rem.pop_back();
		}
		else if(!rem.empty() and rem.back() == 'B' and ch == 'B'){
			rem.pop_back();
		}
		else{
			rem += ch;
		}
	}
	printf("%d\n", (int)rem.size());
}
int main()
{
	int T;
	scanf("%d", &T);
	while(T--){
		test_case();
	}
}
