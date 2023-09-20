#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;

    if (N%2 == 0) {
        cout << "NO" << '\n';
        return;
    }

    cout << "YES" << '\n';

    if (N == 1) {
        cout << 1 << ' ' << 2 << '\n';
        return;
    }

    vector<int> A, B;
    A.push_back(1);
    B.push_back(3);
    N *= 2;
    int d = 0;

    for (int i = 4; i <= N; i += 2) {
        if (d%2 == 0) {
            ++d;
            A.push_back(i);
            A.push_back(i+1);
        }
        else {
            ++d;
            B.push_back(i);
            B.push_back(i+1);
        }
    }

    for (int i = 0; i < (int)A.size(); ++i) {
        if (A[i] <= N)
            cout << A[i] << ' ';
    }

    cout << 2 << ' ';

    for (int i = 0; i < (int)B.size(); ++i) {
        if (B[i] <= N)
            cout << B[i] << ' ';
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
