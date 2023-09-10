#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    string S;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    cin >> S;

    vector<pair<int, int>> B;
    int x = N;

    for (int i = 0; i < N; ++i)
        B.push_back({A[i], i});

    sort(B.begin(), B.end());
    int i = N - 1;

    while (i >= 0) {
        if (S[B[i].second] == '1') {
            B[i].first = x;
            --x;
        }

        --i;
    }

    i = N - 1;

    while (i >= 0) {
        if (S[B[i].second] == '0') {
            B[i].first = x;
            --x;
        }

        --i;
    }

    for (int i = N - 1; i >= 0; --i)
        swap(B[i].first, B[i].second);

    sort(B.begin(), B.end());

    for (auto& x: B)
        cout << x.second << ' ';

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
