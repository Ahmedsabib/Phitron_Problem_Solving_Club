#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  ll N, M, cases = 0;
  while (cin >> N >> M) {
    if (N == 0 && M == 0) break;
    cout << "CASE# " << ++cases << ":\n";
    vector<ll> A(N), B(M);
    for (int i = 0; i < N; ++i) {
      cin >> A[i];
    }
    sort(A.begin(), A.end());
    map<ll, ll> mp;
    for (int i = 0; i < N; ++i) {
      if (mp[A[i]] == 0) {
        mp[A[i]] = i + 1;
      }
    }
    for (int i = 0; i < M; ++i) {
      cin >> B[i];
      if (!mp.count(B[i])) {
        cout << B[i] << " not found\n";
      }
      else {
        cout << B[i] << " found at " << mp[B[i]] << '\n';
      }
    }
  }
}
