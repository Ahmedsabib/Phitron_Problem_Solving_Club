#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  vector<int> ans(m);
  int i = 0;
  for (int j = 0; j < m; ++j) {
    while (i < n && a[i] < b[j]) {
      ++i;
    }
    ans[j] = i;
  }
  for (auto& x: ans) {
    cout << x << ' ';
  }
  cout << '\n';
  return 0;
}
