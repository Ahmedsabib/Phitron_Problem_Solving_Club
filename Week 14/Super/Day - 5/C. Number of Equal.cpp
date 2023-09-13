#include <bits/stdc++.h>

#define ll long long
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

void test_case() {
  ll n, m;
  cin >> n >> m;
  vi a(n), b(m);
  rep(i, 0, n) cin >> a[i];
  rep(i, 0, m) cin >> b[i];
  ll ans = 0, cnt = 1, res = 0;
  int j = 0;
  for (int i = 0; i < n; ++i) {
    if (i == n) {
      while (j < m) {
        if (a[i] == b[j]) ++res;
        else if (a[i] < b[j]) break;
        ++j;
      }
      ans += (res * cnt);
      break;
    }
    if (a[i] == a[i + 1] && i < n) {
      ++cnt;
    }
    else {
      while (j < m) {
        if (a[i] == b[j]) ++res;
        else if (a[i] < b[j]) break;
        ++j;
      }
      ans += (res * cnt);
      cnt = 1;
      res = 0;
    }
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int T = 1;
  // cin >> T;
  while (T--) {
    test_case();
  }
  return 0;
}
