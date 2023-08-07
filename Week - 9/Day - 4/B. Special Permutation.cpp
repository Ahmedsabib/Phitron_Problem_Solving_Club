#include <bits/stdc++.h>
using namespace std;

template<typename T_vector>
void output_vector (const T_vector &v, bool add_one = false, int start = -1, int end = -1) {
    if (start < 0) start = 0;
    if (end < 0) end = int(v.size());

    for (int i = start; i < end; i++)
        cout << v[i] + (add_one ? 1 : 0) << (i < end - 1 ? ' ' : '\n');
}

void run_case() {
    int N, A, B;
    cin >> N >> A >> B;

    if (A > N/2 + 1 || B < N/2) {
        cout << -1 << '\n';
        return;
    }

    vector<int> ans;
    vector<bool> vis(N, false);
    ans.push_back(A);
    vis[A - 1] = true;

    for (int i = N; i > A; --i) {
        if ((int)ans.size() == N/2)
            break;

        if (i != B) {
            ans.push_back(i);
            vis[i - 1] = true;
        }
    }

    bool ok = true;

    if ((int)ans.size() != N/2)
        ok = false;

    for (int i = 0; i < N; ++i) {
        if (!vis[i]) {
            ans.push_back(i + 1);

            if (i + 1 > B)
                ok = false;
        }
    }

    if (!ok) {
        cout << -1 << '\n';
        return;
    }

    output_vector(ans);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
