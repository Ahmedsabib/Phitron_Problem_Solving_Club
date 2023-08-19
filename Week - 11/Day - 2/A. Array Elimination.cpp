#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;

    vector<int> freq(30);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 30; ++j) {
            if ((1 << j)&A[i])
                freq[j]++;
        }
    }

    int g = 0;

    for (int i = 0; i < 30; ++i)
        g = gcd(g, freq[i]);

    for (int i = 1; i <= N; ++i) {
        if (g%i == 0)
            cout << i << ' ' ;
    }

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
