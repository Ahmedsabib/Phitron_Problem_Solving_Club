#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int MAXN = 2e5 + 5;

ll freq[MAXN], A[MAXN];

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int N, M;
  cin >> N >> M;
  for (int i = 1; i <= N; ++i) {
    cin >> A[i];
  }
  while (M--) {
    ll L, R;
    cin >> L >> R;
    freq[L]++;
    freq[R + 1]--;
  }
  for (int i = 1; i <= N; ++i) {
    freq[i] += freq[i - 1];
  }
  sort(freq + 1, freq + 1 + N);
  sort(A + 1, A + 1 + N);
  ll ans = 0;
  for (int i = 1; i <= N; ++i) {
    ans += freq[i] * A[i];
  }
  cout << ans << '\n';
  return 0;
}
