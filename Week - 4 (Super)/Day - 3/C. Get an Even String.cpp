#include <bits/stdc++.h>
using namespace std;

void run_case() {
    string S;
    cin >> S;
    vector<bool> vis(26, false);

    int N = (int)S.size();
    int cnt = 0;

    for (int i = 0; i < N; ++i) {
        if (vis[S[i] - 'a']) {
            cnt += 2;

            for (int j = 0; j < 26; ++j)
                vis[j] = false;
        }
        else {
            vis[S[i] - 'a'] = true;
        }
    }

    cout << N - cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
