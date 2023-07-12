#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long T; cin >> T;
	while(T--){
		long long N; cin >> N;
		while(N%2 == 0){
			N /= 2;
		}
		cout << (N == 1? "NO":"YES") << '\n';
	}
	return 0;
}
