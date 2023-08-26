#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    int sum = 0;

    for (int i = 0; i < N; ++i) {
        sum += A[i];

        if (sum <= M) {
            cout << 0 << ' ';
        }
        else {
            int cnt = 0, diff = sum;
            sort(A.begin(), A.begin()+i);
            
            for (int j = i-1; j >= 0; --j) {
                diff -= A[j];
                ++cnt;

                if (diff <= M)
                    break;
            }

            cout << cnt << ' ';
        }
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
