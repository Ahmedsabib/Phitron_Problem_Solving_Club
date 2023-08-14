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
    int64_t N;
    cin >> N;
    vector<int64_t> A(N);
    vector<pair<int64_t, int64_t>> B;

    for (auto& x: A)
        cin >> x;

    for (int i = 0; i < N; ++i)
        B.push_back({A[i], i + 1});

    vector<int64_t> ans;
    map<int64_t, int64_t> mp;

    sort(B.rbegin(), B.rend());

    int64_t mid = (N + 2 - 1)/2, d = mid - 1, e = mid + 1, sum = 0;

    for (int i = 1; i < N; i += 2) {
        sum += abs(d - mid) * B[i].first * 2;
        mp[B[i].second] = d;
        --d;
    }

    for (int i = 0; i < N; i += 2) {
        sum += abs(e - mid) * B[i].first * 2;
        mp[B[i].second] = e;
        ++e;
    }

    cout << sum << '\n';
    cout << mid << ' ';
    for (int i = 1; i <= N; ++i)
        cout << mp[i] << ' ';

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
