#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+7;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    sort(A.begin(), A.end());
    int ans = MAX, t = -1;

    for (int i = A[0]; i <= A[N-1]; ++i) {
        int x = i, sum = 0;
        
        for (int j = 0; j < N; ++j)
            sum += min({abs(x  - A[j]), abs(x - 1 - A[j]), abs(x + 1 - A[j])});

        if (sum < ans) {
            ans = sum;
            t = x;
        }
    }

    cout << t << ' ' << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
