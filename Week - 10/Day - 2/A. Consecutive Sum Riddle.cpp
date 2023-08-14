#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int64_t N;
    cin >> N;

    cout << -1 * (N - 1) << ' ' << N << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
