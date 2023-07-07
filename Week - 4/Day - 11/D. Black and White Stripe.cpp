#include <bits/stdc++.h>
using namespace std;
const int maxn = (int)2e5 + 7;
void test_case() {
  int n, k;
  char s[maxn];
  scanf("%d %d %s", &n, &k, s);
  int pre[n+1];
  pre[0] = 0;
  for (int i = 1; i <= n; ++i) {
    pre[i] = pre[i-1] + int(s[i-1] == 'W');
  }
  long long ans = 1e18;
  for (int i = k; i <= n; ++i) {
    ans = min(ans, (long long)pre[i]-pre[i-k]);
  }
  printf("%lld\n", ans);
}
int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    test_case();
  }
  return 0;
}
