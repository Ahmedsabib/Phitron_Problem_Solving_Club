#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<vector<int>> record;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    record.push_back(A);

    while (1) {
        vector<int> freq(N + 1);

        for (auto& x: record.back())
            freq[x]++;

        vector<int> B(N);

        for (int i =  0; i < (int)record.back().size(); ++i)
            B[i] = freq[record.back()[i]];

        if (B == record.back())
            break;

        record.push_back(B);
    }

    int q;
    cin >> q;

    while (q--) {
        int x, k;
        cin >> x >> k;
        --x;
        k = min(k, (int)record.size() - 1);

        cout << record[k][x] << '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
