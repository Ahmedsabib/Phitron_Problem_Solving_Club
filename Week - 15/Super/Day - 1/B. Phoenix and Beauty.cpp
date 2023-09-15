#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define int long long
#define vi vector<int>
#define trav(x, a) for (auto& x: a)
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define per(i, a, n) for(int i = n - 1; i >= a; --i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int32_t main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n) {
      cin >> a[i];
    }
    set<int> s;
    rep(i, 0, n) {
      s.insert(a[i]);
    }
    if ((int)s.size() > k) {
      cout << -1 << '\n';
      continue;
    }
    cout << n * k << '\n';
    rep(i, 0, n) {
      trav(x, s) {
        cout << x << ' ';
      }
      rep(j, 0, k - (int)s.size()) {
        cout << 1 << ' ';
      }
    }
    cout << '\n';
  }
}
