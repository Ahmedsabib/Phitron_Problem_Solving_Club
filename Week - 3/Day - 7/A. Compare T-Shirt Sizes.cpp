#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    string a, b;
    cin >> a >> b;
    if (a == b) {
      cout << "=\n";
      continue;
    }
    int n = (int)a.size(), m = (int)b.size();
    if (a[n - 1] == 'S') {
      if (b[m - 1] == 'M') {
        cout << "<\n";
      }
      else if (b[m - 1] == 'S') {
        if (n - 1 > m - 1) {
          cout << "<\n";
        }
        else {
          cout << ">\n";
        }
      }
      else if (b[m - 1] == 'L') {
        cout << "<\n";
      }
    }
    else if (a[n - 1] == 'M') {
      if (b[m - 1] == 'S') {
        cout << ">\n";
      }
      else if (b[m - 1] == 'L') {
        cout << "<\n";
      }
    }
    else if (a[n - 1] == 'L') {
      if (b[m - 1] == 'S') {
        cout << ">\n";
      }
      else if (b[m - 1] == 'L') {
        if (n - 1 > m - 1) {
          cout << ">\n";
        }
        else {
          cout << "<\n";
        }
      }
      else if (b[m - 1] == 'M') {
        cout << ">\n";
      }
    }
  }
  return 0;
}
