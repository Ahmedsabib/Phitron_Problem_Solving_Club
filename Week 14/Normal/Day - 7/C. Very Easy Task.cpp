#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long n, m, k;
bool good(long long x) {
  return (x/m)+(x/k) >= n-1;
}
int main() {
  cin >> n >> m >> k;
  if (n == 1) {
    cout << min(m, k) << '\n';
    return 0;
  }
  long long low = 0, high = 2e9+7;
  while (low+1 < high) {
    long long mid = (low + high)/2;
    if (good(mid)) {
      high = mid;
    }
    else {
      low = mid;
    }
  }
  cout << high+min(m, k) << '\n';
  return 0;
}
