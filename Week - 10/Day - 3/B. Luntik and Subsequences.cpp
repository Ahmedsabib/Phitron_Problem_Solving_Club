#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int64_t> A(N);

    for (auto& x: A)
        cin >> x;

    int one = count(A.begin(), A.end(), 1);
    int zero = count(A.begin(), A.end(), 0);

    cout << (1LL << zero) * one << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();
    return 0;
}
