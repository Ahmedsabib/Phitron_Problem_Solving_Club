#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      scanf("%d", &a[i]);
    }
    map<int, int> mp;
    int ans = 0;
    for (int i = n - 1; i >= 0; --i) {
      if (mp[a[i] - 1] > i) ++ans;
      mp[a[i]] = i;
    }
    printf("%d\n", ans);
  }
  return 0;
}
