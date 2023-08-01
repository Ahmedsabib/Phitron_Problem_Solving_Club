#include <bits/stdc++.h>
using namespace std;
const int inf = (int)1e9 + 5;
// Time Complexity O(log min(a, b))
// recursive method
long long gcd(long long a, long long b) {
  return b ? gcd(b, a%b) : a;
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    if (n == 1) {
      cout << (a[0] == 1? 0 : 1) << '\n';
      continue;
    }
    long long g = 0;
    for (int i = 0; i < n; ++i) {
      g = gcd(g, a[i]);
    }
    if (g == 1) {
      cout << "0\n";
      continue;
    }
    vector<long long> b(a.begin(), a.end());
    long long ans = inf, cnt = 0;
    for (int i = 0; i < n; ++i) {
      long long x = gcd(i + 1, a[i]);
      a[i] = x;
      for (int j = 0; j < n; ++j) {
        x = gcd(x, a[j]);
      }
      cnt += n - (i + 1) + 1;
      if (x == 1) {
        break;
      }
    }
    ans = min(ans, cnt);
    cnt = 0;
    a = b;
    for (int i = n - 1; i >= 0; --i) {
      long long x = gcd(i + 1, a[i]);
      a[i] = x;
      for (int j = n - 1; j >= 0; --j) {
        x = gcd(x, a[j]);
      }
      cnt += n - (i + 1) + 1;
      if (x == 1) {
        break;
      }
    }
    ans = min(ans, cnt);
    a = b;
    for (int i = 0; i < n; ++i) {
      cnt = 0;
      long long x = gcd(i + 1, a[i]);
      for (int j = 0; j < n; ++j) {
        if (i != j) {
          x = gcd(x, a[j]);
        }
      }
      if (x == 1) {
        cnt = n - (i + 1) + 1;
        ans = min(ans, cnt);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
