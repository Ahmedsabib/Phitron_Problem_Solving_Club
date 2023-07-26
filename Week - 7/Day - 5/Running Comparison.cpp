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
  int n;
  cin >> n;
  vi a(n), b(n);
  rep(i, 0, n) {
    cin >> a[i];
  }
  rep(i, 0, n) {
    cin >> b[i];
  }
  ll ans = 0;
  rep(i, 0, n) {
    int x = min(a[i], b[i]);
    int y = max(a[i], b[i]);
    double z = (double)y/x;
    // cout << z << ' ';
    if (z <= 2.0000) {
      ++ans;
    }
  }
  cout << ans << '\n';
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
