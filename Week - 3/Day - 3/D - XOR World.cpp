#include <bits/stdc++.h>
using namespace std;
long long compute_xor(long long x) {
  if (x%4 == 0) {
    return x;
  }
  else if (x%4 == 1) {
    return 1;
  }
  else if (x%4 == 2) {
    return x+1;
  }
  else {
    return 0;
  }
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  long long a, b;
  cin >> a >> b;
  cout << (compute_xor(a-1)^compute_xor(b)) << '\n';
  return 0;
}
