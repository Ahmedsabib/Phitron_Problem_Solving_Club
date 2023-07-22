#include<bits/stdc++.h>

const long long MOD = 1e9+7;

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int T; cin >> T;
	while(T--){
		
		long long N, M; cin >> N >> M;
		long long ans = 1;
		for(int i = 0; i < M; ++i){
			ans = (ans%MOD)*(N%MOD);
			ans %= MOD;
		}
		cout << ans << '\n';
	}

	return 0;
}
