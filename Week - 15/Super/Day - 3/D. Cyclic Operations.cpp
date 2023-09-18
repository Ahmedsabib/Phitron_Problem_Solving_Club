#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& x: a) {
      cin >> x;
      x--;
    }
    bool ok = 1;
    if (k == 1) {
      for (int i = 0; i < n; i++) {
        ok &= a[i] == i;
      }
      cout << (ok ? "YES" : "NO") << '\n';
      continue;
    }
    vector<int> indeg(n), vis(n);
    for (int x: a) {
      indeg[x]++;
    }
    vector<int> que;
    for (int i = 0; i < n; i++) {
      if (!indeg[i]) {
        que.emplace_back(i);
      }
    }
    for (int i = 0; i < (int)que.size(); i++) {
      int v = que[i];
      if (!--indeg[a[v]]) {
        que.emplace_back(a[v]);
      }
    }
    for (int v: que) {
      vis[v] = 1;
    }
    for (int i = 0; i < n; i++) {
      if (vis[i]) {
        continue;
      }
      int len = 0;
      int v = i;
      while (1) {
        vis[v] = 1;
        v = a[v];
        len++;
        if (v == i) {
          break;
        }
      }
      ok &= len == k;
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
}
