#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(vector<int> &A) {
    for (int i = 0; i < (int)A.size()/2; ++i) {
        if (A[i] != A[(int)A.size() - 1 - i])
            return false;
    }

    return true;
}

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    int d = -1;

    for (int i = 0; i < N/2; ++i) {
        if (A[i] != A[N - 1 - i]) {
            d = i;
            break;
        }
    }

    if (d == -1) {
        cout << "YES" << '\n';
        return;
    }

    vector<int> B, C;

    for (int i = 0; i < N; ++i) {
        if (A[i] != A[d])
            B.push_back(A[i]);

        if (A[i] != A[N - d - 1])
            C.push_back(A[i]);
    }

    if (is_palindrome(B) || is_palindrome(C))
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
