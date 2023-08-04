#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  ll N, M, K;
  cin >> N >> M >> K;
  vector<ll> V(N + 1);
  for (int i = 1; i <= N; ++i) {
    cin >> V[i];
  }
  vector<pair<pair<ll, ll>, ll>> A(M + 1);
  for (int i = 1; i <= M; ++i) {
    ll L, R, D;
    cin >> L >> R >> D;
    A[i] = {{L, R + 1}, D};
  }
  vector<ll> res(N + 2), query_diff(M + 2);
  while (K--) {
    ll X, Y;
    cin >> X >> Y;
    query_diff[X]++;
    query_diff[Y + 1]--;
  }
  for (int i = 1; i <= M; ++i) {
    query_diff[i] += query_diff[i - 1];
  }
  for (int i = 1; i <= M; ++i) {
    ll X = A[i].first.first;
    ll Y = A[i].first.second;
    ll Z = A[i].second;
    res[X] += Z * query_diff[i];
    res[Y] -= Z * query_diff[i];
  }
  for (int i = 1; i <= N; ++i) {
    res[i] = res[i - 1] + res[i];
    cout << V[i] + res[i] << ' ';
  }
  cout << '\n';
  return 0;
}
