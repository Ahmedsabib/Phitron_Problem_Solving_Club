#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    int growth = 0;

    for (int i = 0; i < N; ++i) {
        if (i == 0) {
            growth += (A[i] == 1);
            continue;
        }

        if (A[i - 1] == 0 && A[i] == 0) {
            cout << -1 << '\n';
            return;
        }
        else if (A[i] == 1 && A[i - 1] == 1) {
            growth += 5;
        }
        else if (A[i] == 1) {
            growth++;
        }
    }

    cout << growth + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
