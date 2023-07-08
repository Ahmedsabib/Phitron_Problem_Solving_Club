#include <bits/stdc++.h>
using namespace std;

void run_case() {
    string S;
    cin >> S;
    int N = (int)S.size();

    if (S[N - 1]%2 == 0) {
        cout << 0 << '\n';
        return;
    }
    else if (S[0]%2 == 0) {
        cout << 1 << '\n';
        return;
    }

    for (int i = 0; i < N; ++i) {
        if (S[i]%2 == 0) {
            cout << 2 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
