#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long n, h, w;

bool good (long long x) {
  return (x/h)*(x/w) >= n;
}

int main() {
  cin >> h >> w >> n;
  long long low = 0, high = 1;
  while (!good(high)) {
    high *= 2;
  }
  while (low+1 < high) {
    long long mid = (low + high)/2;
    if (good(mid)) {
      high = mid;
    }
    else {
      low = mid;
    }
  }
  cout << high << '\n';
  return 0;
}
