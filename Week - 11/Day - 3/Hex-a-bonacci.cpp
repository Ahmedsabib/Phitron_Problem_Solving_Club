#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e7 + 7;

ll fib[10005];

int main() {
  int tests;
  scanf("%d", &tests);
  for (int cases = 0; cases < tests; ++cases) {
    ll a, b, c, d, e, f, n;
    scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
    fib[0] = a;
    fib[1] = b;
    fib[2] = c;
    fib[3] = d;
    fib[4] = e;
    fib[5] = f;
    for (int i = 6; i <= n; ++i) {
      fib[i] = (fib[i - 1] + fib[i - 2] + fib[i - 3] + fib[i - 4] + fib[i - 5] + fib[i - 6])%mod;
    }
    printf("Case %d: %lld\n", cases + 1, fib[n]%mod);
  }
}
