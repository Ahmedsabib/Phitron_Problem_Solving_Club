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
    int N;
    string S;
    cin >> N >> S;
    int black = 0, white = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == 'B')
            ++black;
        else
            ++white;
    }

    if (black%2 != 0 && white%2 != 0) {
        cout << -1 << '\n';
        return;
    }

    char color = (black%2 != 0? 'B' : 'W');
    vector<int> A;

    for (int i = 0; i < N - 1; ++i) {
        if (S[i] != color) {
            A.push_back(i + 1);
            S[i] = 'B' + 'W' - S[i];
            S[i + 1] = 'B' + 'W' - S[i + 1];
        }
    }

    cout << (int)A.size() << '\n';
    output_vector(A);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
