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
  ll n, k;
  cin >> n >> k;
  vi a(n);
  rep(i, 0, n) cin >> a[i];
  ll l = 0, h = 2e9 + 7;
  while (l <= h) {
    ll m = (h - l)/2 + l;
    ll sum = 0;
    rep(i, 0, n) sum += max(m - a[i], 0LL);
    if (sum <= k) l = m + 1;
    else h = m - 1;
  }
  cout << l - 1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    test_case();
  }
  return 0;
}
