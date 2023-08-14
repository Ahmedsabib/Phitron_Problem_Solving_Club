#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    if (N%2 == 0) {
        cout << "YES" << '\n';
        return;
    }

    for (int i = 1; i < N; ++i) {
        if (A[i - 1] >= A[i]) {
            cout << "YES" << '\n';
            return;
        }
    }

    cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
