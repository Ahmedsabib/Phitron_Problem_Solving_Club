#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int64_t N, M; cin >> N >> M;
    if(N == M){
    	cout << "NO" << '\n';
    	return 0;
    }
    cout << "YES" << '\n';
    int64_t x = N;
    for(int i = 0; i < ((M-N)+1)/2; ++i){
    	cout << x << ' ' << x+1 << '\n';
    	x += 2;
    }
    
    return 0;
}
