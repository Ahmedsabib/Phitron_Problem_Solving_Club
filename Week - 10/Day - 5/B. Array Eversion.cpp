#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int64_t> A(N);

    for (auto& x: A)
        cin >> x;

    int64_t cnt = 0, maxi = A[N - 1];

    for (int i = N - 2; i >= 0; --i) {
        if (A[i] > maxi) {
            maxi = A[i];
            ++cnt;
        }
    }

    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
