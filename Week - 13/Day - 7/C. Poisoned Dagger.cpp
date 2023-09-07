#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int64_t N, H;
    cin >> N >> H;
    vector<int64_t> A(N);

    for (auto& x: A)
        cin >> x;

    int64_t low = 1, high = 1e18;

    while (low <= high) {
        int64_t mid = (low + high)/2;
        int64_t total = mid;

        for (int i = 0; i < N - 1; ++i)
            total += min(mid, A[i + 1] - A[i]);

        if (total < H)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << high + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
