#include <bits/stdc++.h>
using namespace std;
void test_case() {
  vector<string> s(8);
  for (int i = 0; i < 8; ++i) {
    cin >> s[i];
  }
  int row = -1, col = -1;
  for (int i = 1; i < 7; ++i) {
    for (int j = 1; j < 7; ++j) {
      int cnt = 0;
      for (int k = i-1; k <= i+1; ++k) {
        for (int l = j-1; l <= j+1; ++l) {
          if (s[k][l] == '#') {
            ++cnt;
          }
        }
      }
      if (cnt == 5) {
        row = i;
        col = j;
      }
    }
  }
  cout << row + 1 << ' ' << col + 1 << '\n';
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    test_case();
  }
  return 0;
}
