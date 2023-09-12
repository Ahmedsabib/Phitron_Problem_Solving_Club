#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long n, m;
    cin >> n >> m;
    if (n % m != 0) {
      cout << "-1\n";
      continue;
    }
    vector<long long> a(n);
    iota(a.begin(), a.end(), 1);
    a[0] = m;
    a[n - 1] = 1;
    for (int i = 2 * m; i <= n; i += m) {
      if (n%i == 0) {
        a[m - 1] = i;
        m = i;
      }
    }
    for (int i = 0; i < n; ++i) {
      cout << a[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
