#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    cin >> n;
    int m = (n + 1)/2;
    cout << m << '\n';
    for (int i = 0; i < m; ++i) {
      cout << 3 * i + 1 << ' ' << 3 * (n - i) << '\n';
    }
  }
  return 0;
}
