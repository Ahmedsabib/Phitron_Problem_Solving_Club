#include <bits/stdc++.h>
using namespace std;
// Time Complexity O(log n)
// iterative method
// (a^b)
long long binpow(long long a, long long b) {
  long long res = 1;
  while (b > 0) {
    if (b&1) {
      res = res * a;
    }
    a = a * a;
    b >>= 1;
  }
  return res;
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long n;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i <= 10; ++i) {
      long long x = binpow(10, i);
      if (x > n) {
        ans = i - 1;
        break;
      }
    }
    cout << n - binpow(10, ans) << '\n';
  }
  return 0;
}
