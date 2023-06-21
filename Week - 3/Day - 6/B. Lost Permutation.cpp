#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    set<int> s (a.begin(), a.end());
    int maxi = *s.rbegin();
    long long sum = 0;
    for (int i = 1; i <= maxi; ++i) {
      if (s.count(i)) {
        continue;
      }
      sum += i;
    }
    if (sum > m) {
      cout << "NO\n";
    }
    else if (sum == m) {
      cout << "YES\n";
    }
    else {
      int ok = 0;
      for (int i = maxi + 1; ; ++i) {
        sum += i;
        if (sum == m) {
          ok = 1;
          break;
        }
        else if (sum > m) {
          break;
        }
      }
      cout << (ok? "YES\n" : "NO\n");
    }
  }
  return 0;
}
