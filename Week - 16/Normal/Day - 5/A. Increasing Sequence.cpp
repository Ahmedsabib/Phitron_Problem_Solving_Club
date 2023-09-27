#include <bits/stdc++.h>

#define int long long
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

void test_case() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, 0, n) {
    cin >> a[i];
  }
  int b = 0;
  rep(i, 0, n) {
    b++;
    if (b == a[i]) {
      b++;
    }
  }
  cout << b << '\n';
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
