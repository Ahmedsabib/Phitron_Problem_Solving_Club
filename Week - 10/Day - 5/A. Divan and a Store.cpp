#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int64_t N, L, R, K;
    cin >> N >> L >> R >> K;
    vector<int64_t> A(N);

    for (auto& x: A)
        cin >> x;

    sort(A.begin(), A.end());
    int64_t sum = 0, ans = 0;

    for (int i = 0; i < N; ++i) {
        if (A[i] >= L && A[i] <= R) {
            sum += A[i];
            ++ans;
        }

        if (sum > K) {
            --ans;
            break;
        }
    }

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
