#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int pos1 = -1, pos2 = -1, pos3 = -1;
    for (int i = 0; i < n; ++i) {
      if (a[i] == 1) {
        pos1 = i;
      }
      else if (a[i] == 2) {
        pos2 = i;
      }
      else if (a[i] == n) {
        pos3 = i;
      }
    }
    if (pos3 != 0 && pos3 != n - 1) {
      if (pos1 >= pos3) {
        cout << pos2 + 1 << ' ' << pos3 << '\n';
      }
      else {
        cout << pos2 + 1 << ' ' << pos3 + 2 << '\n';
      }
    }
    else {
      if (pos3 > pos1 && pos2 > pos1) {
        cout << pos3 + 1 << ' ' << pos2 + 1 << '\n';
      }
      else if (pos3 < pos1 && pos2 < pos1) {
        cout << pos3 + 1 << ' ' << pos2 + 1 << '\n';
      }
      else {
        cout << pos3 + 1 << ' ' << pos1 + 1 << '\n';
      }
    }
  }
  return 0;
}
