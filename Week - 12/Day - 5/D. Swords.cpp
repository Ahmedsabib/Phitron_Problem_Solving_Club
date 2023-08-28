#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd (b, a % b) : a;
}

void run_case() {
    int64_t N;
    cin >> N;
    vector<int64_t> A(N);

    for (auto& x: A)
        cin >> x;

    sort(A.begin(), A.end());
    int64_t sum = accumulate(A.begin(), A.end(), 0LL);

    int64_t g = A[N - 1] - A[0];

    for (int i = 1; i < N; ++i)
        g = gcd(g, A[N - 1] - A[i]);

    cout << (A[N - 1] * N * 1LL - sum)/g << ' ' << g << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
