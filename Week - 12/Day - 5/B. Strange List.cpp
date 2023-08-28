#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long T; cin >> T;
	while(T--){
		long long N, X; cin >> N >> X;
		int A[N];
		long long sum = 0;
		for(int i = 0; i < N; ++i){
			cin >> A[i];
			sum += A[i];
		}
		long long ok = 0, cnt = 1;
		while(1){
			cnt *= X;
			for(int i = 0; i < N; ++i){
				if(A[i]%X){
					ok = 1;
					break;
				}
				else{
					A[i] /= X;
					sum += (A[i]*cnt);
				}
			}
			if(ok) break;
		}
		cout << sum << '\n';
	}
	return 0;
}
