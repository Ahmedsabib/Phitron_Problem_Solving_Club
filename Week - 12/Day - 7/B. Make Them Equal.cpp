#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    set<int> B (A.begin(), A.end());
    vector<int> C (B.begin(), B.end());

    if (C.size() > 3) {
        cout << -1 << '\n';
    }
    else if (C.size() == 3) {
        if (C[2] - C[1] == C[1] - C[0])
            cout << C[2] - C[1] << '\n';
        else
            cout << -1 << '\n';
    }
    else if (C.size() == 2) {
        if ((C[1] - C[0])%2 == 0)
            cout << (C[1] - C[0])/2 << '\n';
        else
            cout << C[1] - C[0] << '\n';
    }
    else {
        cout << 0 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
