#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  long long n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  map<long long, long long> cnt;
  for (int i = 0; i < n; ++i) {
    long long x = sqrt(a[i]);
    for (int j = 2; j <= x; ++j) {
      if (a[i]%j == 0) {
        cnt[j]++;
      }
      while (a[i]%j == 0) {
        a[i] /= j;
      }
    }
    if (a[i] > 1) {
      cnt[a[i]]++;
    }
  }
  long long maxi = 1;
  for (auto& x: cnt) {
    maxi = max(maxi, x.second);
  }
  cout << maxi << '\n';
  return 0;
}
