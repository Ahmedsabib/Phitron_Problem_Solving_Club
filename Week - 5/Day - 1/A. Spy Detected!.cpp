#include<bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int T; cin >> T;
	while(T--){
		
		int N; cin >> N;
		int A[N];
		for(int i = 0; i < N; ++i){
			cin >> A[i];
		}
		int cnt = 0;
		for(int i = 0; i < N; ++i){
			if(A[0] == A[i]) ++cnt;
		}
		int pos = -1;
		if(cnt > 1){
			for(int i = 0; i < N; ++i){
				if(A[i] != A[0]){
					pos = i+1;
					break;
				}
			}
			cout << pos << '\n';
		} else{
			cout << 1 << '\n';
		}

	}

	return 0;
}
