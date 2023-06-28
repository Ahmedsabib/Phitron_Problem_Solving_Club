#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    cin >> n;
    if (n == 1 || n == 3) {
      cout << "-1\n";
      continue;
    }
    if (n%2 == 0) {
      int d = n;
      for (int i = 1; i <= n; ++i) {
        cout << d-- << ' ';
      }
      cout << '\n';
    }
    else {
      int d = n, pos = -1;
      for (int i = 1; i <= n; ++i) {
        if (d == i) {
          pos = i;
          break;
        }
        else {
          cout << d-- << ' ';
        }
      }
      for (int i = 1; i <= pos; ++i) {
        cout << i << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}
