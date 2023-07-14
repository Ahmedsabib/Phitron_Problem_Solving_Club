#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (auto& x: A)
        cin >> x;


    vector<int> freq(3);

    for (int i = 0; i < N; ++i)
        freq[A[i]%3]++;


    int a = min(freq[1], freq[2]);
    int b = (freq[1] - a)/3;
    int c = (freq[2] - a)/3;
    int ans = freq[0] + a + b + c;

    cout << ans << '\n';

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
