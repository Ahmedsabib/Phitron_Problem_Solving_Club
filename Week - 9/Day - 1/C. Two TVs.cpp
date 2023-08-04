#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using pii = pair<ll, ll>;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int N;
  cin >> N;
  vector<pii> A;
  for (int i = 0; i < N; ++i) {
    ll X, Y;
    cin >> X >> Y;
    A.push_back({X, Y});
  }
  sort(A.begin(), A.end());
  ll ok = 0, res_last = A[0].second, cur_last = -1;
  for (int i = 1; i < N; ++i) {
    if (res_last < A[i].first) {
      res_last = A[i].second;
    }
    else if (cur_last < A[i].first) {
      cur_last = A[i].second;
    }
    else {
      ok = 1;
    }
  }
  cout << (ok == 0? "YES\n" : "NO\n");
  return 0;
}
