#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    vector<int> last(N+1, -1);
    int ans = N+5;

    for (int i = 0; i < N; ++i) {
        if (last[A[i]] != -1)
            ans = min(ans, i - last[A[i]] + 1);

        last[A[i]] = i;
    }

    if (ans > N)
        ans = -1;

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
