#include <bits/stdc++.h>
using namespace std;

void run_case() {
    vector<int> A(3);

    for (auto& x: A)
        cin >> x;

    sort(A.begin(), A.end());

    if (A[2] <= A[1] + A[0])
        cout << (A[0]+A[1]+A[2]) /2 << '\n';
    else
        cout << A[1]+A[0] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
