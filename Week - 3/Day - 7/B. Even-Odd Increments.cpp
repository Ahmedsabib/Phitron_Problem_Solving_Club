#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    long long odd = 0, even = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i]&1) {
        ++odd;
      }
      else {
        ++even;
      }
    }
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
      ans += a[i];
    }
    while (q--) {
      long long x, y;
      cin >> x >> y;
      if (x == 0) {
        ans += (y * even);
        if (y%2 == 1) {
          odd += even;
          even = 0;
        }
      }
      else {
        ans += (y * odd);
        if (y%2 == 1) {
          even += odd;
          odd = 0;
        }
      }
      cout << ans << '\n';
    }
  }
  return 0;
}
