#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
  return b ? gcd(b, a%b) : a;
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    long long sum2 = 0;
    long long g = 0, ans = 0;
    for (int i = 0; i < n - 1; ++i) {
      sum -= a[i];
      sum2 += a[i];
      g = gcd(sum, sum2);
      ans = max(ans, g);
    }
    cout << ans << '\n';
  }
  return 0;
}
