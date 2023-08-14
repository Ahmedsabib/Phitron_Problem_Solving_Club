#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int64_t N, H;
    cin >> N >> H;
    vector<int64_t> A(N);

    for (auto& x: A)
        cin >> x;

    sort(A.rbegin(), A.rend());

    if (N == 1) {
        cout << (H+A[0]-1)/A[0] << '\n';
        return;
    }

    int64_t a = A[0], b = A[1];
    int64_t total = a + b;
    int64_t ans = 2 * (H / total);
    H %= total;
    ans += H > 0;
    ans += H > a;
    
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
