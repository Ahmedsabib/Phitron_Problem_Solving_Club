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
  vector<int> ans(n + m);
  int i = 0, j = 0, k = 0;
  while (i < n || j < m) {
    if (j == m || (i < n && a[i] < b[j])) {
      ans[k++] = a[i++];
    }
    else {
      ans[k++] = b[j++];
    }
  }
  for (auto& x: ans) {
    cout << x << ' ';
  }
  cout << '\n';
  return 0;
}
