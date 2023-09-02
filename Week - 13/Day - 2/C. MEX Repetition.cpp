#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    long long last = (long long) n * (n + 1) / 2 - sum;
    a.push_back((int) last);
    k %= n + 1;
    rotate(a.begin(), a.begin() + (n + 1) - k, a.end());
    for (int i = 0; i < n; i++) {
      cout << a[i] << " \n"[i == n - 1];
    }
  }
  return 0;
}
