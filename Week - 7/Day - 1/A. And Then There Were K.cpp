#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int T; cin >> T;
    while(T--){
        
        int N; cin >> N;
        double x = log2(N);
        int y = (int)x;
        int ans = (1 << y) - 1;
        cout << ans << '\n';
    }
    
    return 0;
}
