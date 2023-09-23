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
  vector<ll> a(n);
  rep(i, 0, n) cin >> a[i];
  vector<ll> ans(n, 0);
  ll sum = 0;
  rep(i, 0, n) {
    sum += a[i];
    ans[((sum%n) + n)%n]++;
  }
  ll res = 0;
  rep(i, 0, n) {
    if (ans[i] > 1) {
      res += (ans[i] * (ans[i] - 1))/2;
    }
  }
  res += ans[0];
  cout << res << '\n';
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
