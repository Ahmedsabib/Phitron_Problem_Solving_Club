#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long x) {
  if (x < 2) {
    return false;
  }
  for (int d = 2; d * d <= x; ++d) {
    if (x%d == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  long long n;
  cin >> n;
  if (is_prime(n)) {
    cout << 1 << '\n';
  }
  else if (is_prime(n - 2)) {
    cout << 2 << '\n';
  }
  else if (n%2 == 0) {
    cout << 2 << '\n';
  }
  else {
    cout << 3 << '\n';
  }
  return 0;
}
