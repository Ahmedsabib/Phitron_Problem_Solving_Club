#include <bits/stdc++.h>
using namespace std;
long long query(int low, int high, vector<long long>& sum) {
  return sum[high] - (low ? sum[low-1] : 0);
}
void test_case() {
  int n, s;
  cin >> n >> s;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  vector<long long> sum(n);
  for (int i = 0; i < n; ++i) {
    sum[i] = a[i];
    if (i) {
      sum[i] += sum[i-1];
    }
  }
  int ans = INT_MAX;
  for (int i = 0; i < n; ++i) {
    int low = i, high = n-1, pos = -1;
    while (low <= high) {
      int mid = low + (high - low)/2;
      if (query(i, mid, sum) <= s)   {
        pos = mid;
        low = mid + 1;
      }
      else {
        high = mid - 1;
      }
    }
    if (pos == -1 || query(i, pos, sum) != s) {
      continue;
    }
    ans = min(ans, n - (pos - i + 1));
  }
  if (ans == INT_MAX) {
    cout << -1 << '\n';
  }
  else {
    cout << ans << '\n';
  }
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    test_case();
  }
  return 0;
}
