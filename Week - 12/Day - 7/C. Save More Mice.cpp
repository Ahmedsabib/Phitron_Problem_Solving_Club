#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int64_t M, N;
    cin >> M >> N;
    vector<int64_t> A(N);

    for (auto& x: A)
        cin >> x;

    sort(A.begin(), A.end());
    int64_t sum = 0, ans = 0;

    for (int i = N - 1; i >= 0; --i) {
        sum += M - A[i];

        if (sum < M) {
            ans = N - i;
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
