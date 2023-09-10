#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while(tt--){
	long long N, K; cin >> N >> K;
	long long ans = 1e9+7;
	for(int i = 0; i < 40; ++i){
		long long c = K + i, v = N, cnt = 0;
		if(c > 1){
			while(v > 0){
				v /= c;
				++cnt;
			}
			ans = min(ans, cnt+i);
		}
	}
	cout << ans << '\n';
  }
}
