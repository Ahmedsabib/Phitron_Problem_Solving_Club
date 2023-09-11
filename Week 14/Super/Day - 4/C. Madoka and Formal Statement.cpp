#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
      cin >> b[i];
    }
    bool ok = false;
    for (int i = 0; i < n; ++i) {
      if (a[i] > b[i]) {
        ok = true;
      }
    }
    for (int i = 0; i < n; ++i) {
      if (b[i] > b[(i + 1)%n] + 1 && a[i] < b[i]) {
        ok = true;
      }
    }
    cout << (ok? "NO\n" : "YES\n");
  }
  return 0;
}
