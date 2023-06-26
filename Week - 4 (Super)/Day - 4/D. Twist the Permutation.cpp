#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A) {
        cin >> x;
        --x;
    }

    vector<int> ans(N);

    for (int i = N - 1; i >= 0; --i) {
        int x;

        for (int j = 0; j <= i; ++j) {
            if (A[j] == i)
                x = j;
        }

        if (x == i)
            ans[i] = 0;
        else
            ans[i] = x + 1;

        rotate(A.begin(), A.begin() + x + 1, A.begin() + i + 1);
    }

    for (auto& x: ans)
        cout << x << ' ';

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
