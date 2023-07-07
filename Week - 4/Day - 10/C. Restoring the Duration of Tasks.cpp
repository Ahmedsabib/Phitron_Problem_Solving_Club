#include <bits/stdc++.h>
using namespace std;
void test_case() {
  int n;
  scanf("%d", &n);
  vector<long long> b(n);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &b[i]);
  }
  vector<long long> c(n);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &c[i]);
  }
  vector<pair<long long, long long>> a;
  for (int i = 0; i < n; ++i) {
    a.push_back({b[i], c[i]});
  }
  printf("%lld ", a[0].second-a[0].first);
  for (int i = 1; i < n; ++i) {
    if (a[i].first < a[i-1].second) {
      printf("%lld ", (a[i].second-a[i].first)-(a[i-1].second-a[i].first));
    }
    else {
      printf("%lld ", (a[i].second-a[i].first));
    }
  }
  printf("\n");
}
int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    test_case();
  }
  return 0;
}
