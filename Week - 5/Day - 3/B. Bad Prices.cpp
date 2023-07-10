#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    int ans = 0;
    int mini = INT_MAX;

    for (int i = N-1; i >= 0; --i) {
        if (A[i] > mini)
            ++ans;

        mini = min(mini, A[i]);
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
