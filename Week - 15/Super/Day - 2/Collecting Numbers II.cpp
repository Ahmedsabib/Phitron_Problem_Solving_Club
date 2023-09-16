#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<int> a(n + 1), mp(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    mp[a[i]] = i;
  }
  int turn = 1;
  for (int i = 1; i < n; ++i) {
    turn += (mp[i] > mp[i + 1]);
  }
  set<pair<int, int>> s;
  while (m--) {
    int x, y;
    cin >> x >> y;
    if (a[x] + 1 <= n) s.insert({a[x], a[x] + 1});
    if (a[x] - 1 >= 1) s.insert({a[x] - 1, a[x]});
    if (a[y] + 1 <= n) s.insert({a[y], a[y] + 1});
    if (a[y] - 1 >= 1) s.insert({a[y] - 1, a[y]});
    for (auto& it: s) {
      turn -= mp[it.first] > mp[it.second];
    }
    swap(a[x], a[y]);
    mp[a[x]] = x;
    mp[a[y]] = y;
    for (auto& it: s) {
      turn += mp[it.first] > mp[it.second];
    }
    s.clear();
    cout << turn << '\n';
  }
  return 0;
}
