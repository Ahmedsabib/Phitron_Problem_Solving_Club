#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    map<long long, long long> ff, ss;
    for (int i = 0; i < n; ++i) {
      if (ff[a[i]] == 0) {
        ff[a[i]] = i + 1;
      }
      ss[a[i]] = i + 1;
    }
    while (m--) {
      long long u, v;
      cin >> u >> v;
      if ((ff[u] == 0 && ss[u] == 0) || (ss[v] == 0 && ff[v] == 0) || (ff[u] > ss[v])) {
        cout << "NO\n";
      }
      else {
        cout << "YES\n";
      }
    }
  }
  return 0;
}
