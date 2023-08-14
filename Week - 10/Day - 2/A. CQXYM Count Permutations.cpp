#include <bits/stdc++.h>
using namespace std;

const int MOD = (int) 1e9 + 7;

void run_case() {
    int N;
    cin >> N;
    N *= 2;
    int64_t ans = 1;

    for (int i = 1; i <= N; ++i) {
        if (i == 2)
            continue;

        ans = (ans * i) % MOD;
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
