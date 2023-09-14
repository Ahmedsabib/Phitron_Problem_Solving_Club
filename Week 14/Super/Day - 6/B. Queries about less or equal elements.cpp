#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int N, M; cin >> N >> M;
    vector<int> A(N), B(M);
    for(int i = 0; i < N; ++i) {
    	cin >> A[i];
    }
    sort(A.begin(), A.end());
    for(int i = 0; i < M; ++i) {
    	cin >> B[i];
    	int ans = upper_bound(A.begin(), A.end(), B[i]) - A.begin();
    	cout << ans << ' ';
    }
    cout << '\n';
    
    return 0;
}
