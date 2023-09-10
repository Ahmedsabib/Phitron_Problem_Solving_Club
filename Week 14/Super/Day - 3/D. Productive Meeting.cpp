#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    set<pair<int, int>> S;

    for (int i = 0; i < N; ++i) {
        if (A[i] > 0) 
            S.insert({-A[i], i});
    }

    vector<pair<int, int>> ans; 

    while ((int)S.size() > 1) {
        pair<int, int> x;
        x = *S.begin();
        S.erase(S.begin());

        pair<int, int> y;
        y = *S.begin();
        S.erase(S.begin());

        ans.push_back({x.second, y.second});
        A[x.second]--;
        A[y.second]--;

        if (A[x.second] > 0)
            S.insert({-A[x.second], x.second});

        if (A[y.second] > 0)
            S.insert({-A[y.second], y.second});
    }

    cout << (int)ans.size() << '\n';

    for (auto& [x, y]: ans)
        cout << x+1 << ' ' << y+1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
