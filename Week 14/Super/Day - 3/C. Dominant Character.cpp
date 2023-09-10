#include <bits/stdc++.h>
using namespace std;

const int INF = (int) 1e9 + 7;

void run_case() {
    int N;
    string S;
    cin >> N >> S;
    int ans = INF;

    for (int i = 0; i < N; ++i) {
        int a = 0, b = 0, c = 0;

        for (int j = i; j < min(N, i + 15); ++j) {
            if (S[j] == 'a') ++a;
            else if (S[j] == 'b') ++b;
            else ++c;

            if (a > max(b, c) && i != j)
                ans = min(ans, j - i + 1);
        }
    }

    if (ans == INF)
        cout << -1 << '\n';
    else
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
