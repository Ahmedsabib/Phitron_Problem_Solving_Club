#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    int min_pos = -1, max_pos = -1;

    for (int i = 1; i < N; ++i) {
        if (A[i] == A[i-1]) {
            if (min_pos == -1)
                min_pos = i;
            max_pos = i;
        }
    }

    if (min_pos == max_pos)
        cout << 0 << '\n';
    else
        cout << max(1, max_pos - min_pos - 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
