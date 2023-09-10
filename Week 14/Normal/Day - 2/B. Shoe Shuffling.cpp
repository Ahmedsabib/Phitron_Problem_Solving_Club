#include <bits/stdc++.h>
using namespace std;
void test_case() {
  int n;
  scanf("%d", &n);
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &a[i]);
  }
  map<long long, int> mp, freq;
  for (int i = 0; i < n; ++i) {
    mp[a[i]] = i+1;
    freq[a[i]]++;
  }
  for (int i = 0; i < n; ++i) {
    if (freq[a[i]] == 1) {
      printf("-1\n");
      return;
    }
  }
  printf("%d ", mp[a[0]]);
  for (int i = 1; i < n; ++i) {
    if (a[i] == a[i-1]) {
      printf("%d ", i);
    }
    else {
      printf("%d ", mp[a[i]]);
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
