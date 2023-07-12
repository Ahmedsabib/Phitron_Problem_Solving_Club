#include <bits/stdc++.h>

using namespace std;

const int MAX = (int) 1e5 + 7;

void test_case() {
  int n, m;
  cin >> n >> m;
  char grid[n + 7][m + 7];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
    }
  }
  for (int j = 0; j < m; ++j) {
    int pos = n - 1;
    for (int i = n - 1; i >= 0; --i) {
      if (grid[i][j] == 'o') {
        pos = i - 1;
      }
      else if (grid[i][j] == '*') {
        swap(grid[i][j], grid[pos][j]);
        pos--;
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << grid[i][j];
    }
    cout << '\n';
  }
}


int main(int argc, char const *argv[]) {
  int T;
  cin >> T;
  while (T--) {
    test_case();
  }
  return 0;
}
