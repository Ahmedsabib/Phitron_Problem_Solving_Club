#include <bits/stdc++.h>

using namespace std;

int n, a[22];

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += a[i];
  }
  int ans = 1e9 + 7;
  for (int i = 0; i < (1 << n); ++i) {
    int total = 0;
    for (int j = 0; j < n; ++j) {
      if ((i & (1 << j))) {
        total += a[j];
      }
    }
    ans = min(ans, abs(sum - 2 * total));
  }
  printf("%d\n", ans);
  return 0;
}
