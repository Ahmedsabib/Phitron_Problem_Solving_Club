#include <bits/stdc++.h>
using namespace std;
void test_case() {
  int n;
  scanf("%d", &n);
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &a[i]);
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i += 2) {
    printf("%lld ", a[i]);
  }
  if (n%2 != 0) {
    --n;
  }
  for (int i = n-1; i >= 0; i -= 2) {
    printf("%lld ", a[i]);
  }
  printf("\n");
}
int main(int argc, char const *argv[]) {
  int t = 1;
  // scanf("%d", &t);
  while (t--) {
    test_case();
  }
  return 0;
}
