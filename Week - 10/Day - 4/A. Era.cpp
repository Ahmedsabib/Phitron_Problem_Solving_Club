#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    int ans = 0, add = 0;

    for (int i = 0; i < N; ++i) {
        if (A[i] > (i + 1 + add)) {
            ans += (A[i] - (i + 1 + add));
            add = (A[i] - i - 1);
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
