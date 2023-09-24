#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  long long n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  long long prev = 0;
  for (int i = 0; i < n; ++i) {
    a[i] = a[i] + prev;
    prev = a[i];
  }
  long long m;
  cin >> m;
  long long ans = 0;
  for (int i = 0; i < m; ++i) {
    long long x;
    cin >> x;
    ans = lower_bound(a.begin(), a.end(), x) - a.begin();
    cout << ans + 1 << '\n';
  }
  return 0;
}
