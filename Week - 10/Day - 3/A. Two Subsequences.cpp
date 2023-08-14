#include <bits/stdc++.h>
using namespace std;

void run_case() {
    string S;
    cin >> S;
    int N = (int)S.size();
    char x = 'z';
    int pos = -1;

    for (int i = 0; i < N; ++i) {
        if (x >= S[i]) {
            x = S[i];
            pos = i;
        }
    }

    cout << x << ' ';

    for (int i = 0; i < N; ++i) {
        if (pos != i)
            cout << S[i];
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
