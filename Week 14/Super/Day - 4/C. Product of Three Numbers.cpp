#include<bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int T; cin >> T;
	while(T--){
		
		long long N; cin >> N;
		long long a, b, c;
		long long ok = 0;
		for(int i = 2; i*i <= N; ++i){
			if(N%i == 0){
				a = i;
				long long M = N/i;
				for(int j = 2; j*j <= M; ++j){
					if(M%j == 0){
						b = j;
						c = M/j;
						if(a != b and b != c and c != a){
							ok = 1;
							break;
						}
					}
				}
				if(ok) break;
			}
		}
		if(ok){
			cout << "YES" << '\n';
			cout << a << ' ' << b << ' ' << c << '\n';
		} 
		else{
			 cout << "NO" << '\n';
		}
	}

	return 0;
}
