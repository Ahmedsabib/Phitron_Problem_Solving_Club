#include <bits/stdc++.h>
using namespace std;

const int INF = (int) 1e9 + 7;

void run_case() {
    int N, K, D;
    cin >> N >> K >> D;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    int ans = INF;

    for (int i = 0; i < N - D + 1; ++i) {
        int j = i;
        set<int> S;

        while (j < D+i) {
            S.insert(A[j]);
            ++j;
        }

        ans = min((int)S.size(), ans);
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
