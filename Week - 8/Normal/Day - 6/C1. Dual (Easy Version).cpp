#include <bits/stdc++.h>

using namespace std;

int check(int a, int b) {
  int x = a - b;
  if (x < 0) x *= -1;
  return x;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int maxi = -100, maxi_pos = -1, mini = 100, mini_pos = -1;
    for (int i = 0; i < n; ++i) {
      if (a[i] <= mini) {
        mini = a[i];
        mini_pos = i;
      }
      if (a[i] >= maxi) {
        maxi = a[i];
        maxi_pos = i;
      }
    }
    if (maxi > 0 && (check(maxi, 0) >= check(mini, 0))) {
      cout << 2 * n - 1 << '\n';
      for (int i = 0; i < n; ++i) {
        cout << i + 1 << ' ' << maxi_pos + 1 << '\n';
      }
      for (int i = 0; i < n - 1; ++i) {
        cout << i + 2 << ' ' << i + 1 << '\n';
      }
    }
    else {
      cout << 2 * n - 1 << '\n';
      for (int i = 0; i < n; ++i) {
        cout << i + 1 << ' ' << mini_pos + 1 << '\n';
      }
      for (int i = n - 1; i > 0; --i) {
        cout << i << ' ' << i + 1 << '\n';
      }
    }
  }
  return 0;
}
