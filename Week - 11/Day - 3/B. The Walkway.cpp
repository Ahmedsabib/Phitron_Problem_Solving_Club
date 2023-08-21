#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, m, d;
    scanf("%d %d %d", &n, &m, &d);
    vector<int> a(m);
    for (int i = 0; i < m; ++i) {
      scanf("%d", &a[i]);
    }
    a.insert(a.begin(), 1 - d);
    a.push_back(n + 1);
    int ans = 2e9 + 7;
    vector<int> res;
    for (int i = 1; i <= m; ++i) {
      int x = a[i + 1] - a[i] - 1;
      int y = a[i + 1] - a[i - 1] - 1;
      int z = a[i] - a[i - 1] - 1;
      int s = y/d - (x/d + z/d);
      if (ans > s) {
        ans = s;
        res.clear();
      }
      else if (ans == s) {
        res.push_back(a[i]);
      }
    }
    for (int i = 1; i < (int)a.size(); ++i) {
      ans += (a[i] - a[i - 1] - 1)/d;
    }
    ans += (int)a.size() - 2;
    printf("%d %d\n", ans - 1, (int)res.size() + 1);
  }
  return 0;
}
