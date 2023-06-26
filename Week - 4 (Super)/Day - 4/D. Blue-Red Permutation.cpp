#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    string S;
    cin >> S;
    vector<int> R, B;

    for (int i = 0; i < (int)S.size(); ++i) {
        if (S[i] == 'R')
            R.push_back(A[i]);
        else if (S[i] == 'B')
            B.push_back(A[i]);
    }

    bool ok = true;
    sort(B.begin(), B.end());

    for (int i = 0; i < (int)B.size(); ++i) {
        if (B[i] <= i)
            ok = false;
    }

    sort(R.rbegin(), R.rend());

    for (int i = 0; i < (int)R.size(); ++i) {
        if (R[i] > N - i)
            ok = false;
    }

    if (ok)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
