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
  rep(i, 0, n) cin >> a[i];
  int dp = 0, ans = 0;
  for (int j = n - 1; j >= 0; j--){
    if (j != 1) ans = max(ans, dp + a[j]);
    else ans = max(ans, dp + a[j] + a[0]);
    dp = max(dp, dp + a[j]);
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
