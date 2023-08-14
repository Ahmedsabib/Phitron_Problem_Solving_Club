#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int64_t A, B, C;
    cin >> A >> B >> C;

    int64_t mid = (A + (B * 2) + (C * 3));
    
    if (mid%2 == 0)
        cout << 0 << '\n';
    else 
        cout << 1 << '\n';

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
