#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int64_t N, M;
    cin >> N >> M;
    int64_t x = (N + M)/4;
    
    cout << min(x, min(N, M)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
