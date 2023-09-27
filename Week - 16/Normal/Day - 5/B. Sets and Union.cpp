#include <bits/stdc++.h>

#define int long long
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

void test_case() {
  int n;
  cin >> n;
  vi a(n);
  int tot = 0;
  rep(i, 0, n) {
    int k;
    cin >> k;
    rep(j, 0, k) {
      int x;
      cin >> x;
      a[i] |= 1LL << x;
    }
    tot |= a[i];
  }
  int ans = 0;
  rep(i, 0, 51) {
    if ((tot >> i) & 1) {
      int z = 0;
      for (int x: a) {
        if ((x >> i) & 1) continue;
        z |= x;
      }
      ans = max(ans, (int)__builtin_popcountll(z));
    }
  }
  cout << ans << '\n';
}

int32_t main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    test_case();
  }
  return 0;
}
