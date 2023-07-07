#include <bits/stdc++.h>
using namespace std;
void test_case() {
  int n;
  scanf("%d", &n);
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &a[i]);
  }
  vector<long long> b(n);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &b[i]);
  }
  long long maxi = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] < b[i]) {
      printf("NO\n");
      return;
    }
    maxi = max(maxi, a[i]-b[i]);
  }
  for (int i = 0; i < n; ++i) {
    a[i] = max(0LL, a[i] - maxi);
  }
  for (int i = 0; i < n; ++i) {
    if (a[i] != b[i]) {
      printf("NO\n");
      return;
    }
  }
  printf("YES\n");
}
int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    test_case();
  }
  return 0;
}
