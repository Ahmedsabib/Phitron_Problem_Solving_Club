#include <bits/stdc++.h>
using namespace std;
long long n, k;
vector<long long> a;
// checking the validity of the number
// if we can increase the median with k attempts
bool good(long long x) {
  long long cur = 0;
  for (int i = (n - 1)/2; i < n; ++i) {
    cur += max((long long)0, x - a[i]);
  }
  return cur <= k;
}
// now, binary search the answer from the limit
// and check the numbers if it is possible to do
long long binary_search() {
  long long ind = 0, maxi = 2e9;
  for (int range = maxi; range >= 1; range /= 2) {
    while (good(range + ind)) {
      ind += range;
    }
  }
  return ind;
}
void test_case() {
  scanf("%lld %lld", &n, &k);
  for (int i = 0; i < n; ++i) {
    long long x;
    scanf("%lld", &x);
    a.push_back(x);
  }
  sort(a.begin(), a.end());
  printf("%lld\n", binary_search());
}
int main(int argc, char const *argv[]) {
  int t = 1;
  // scanf("%d", &t);
  while (t--) {
    test_case();
  }
  return 0;
}
