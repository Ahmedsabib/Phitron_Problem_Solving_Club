#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n, d;
  cin >> n >> d;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  sort(p.rbegin(), p.rend());
  int ans = 0;
  int r = n;
  for (int i = 0; i < r; i++) {
    int t = d / p[i] + 1;
    if (r - i < t) {
      break;
    }
    r -= t - 1;
    ans++;
  }
  cout << ans << '\n';
  return 0;
}
