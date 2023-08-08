#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int T; cin >> T;
    while(T--){
        
        int64_t N; cin >> N;
        vector<int64_t> a(N);
        for(int i = 0; i < N; ++i){
            cin >> a[i];
        }
        int64_t sum = accumulate(a.begin(), a.end(), 0LL);
        if(sum == N){
            cout << 0 << '\n';
        } else if(sum > N){
            cout << sum - N << '\n';
        } else if(sum < N){
            cout << 1 << '\n';
        }
    }
    
    return 0;
}
