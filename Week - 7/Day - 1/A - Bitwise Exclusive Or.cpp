#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  for (int c = 0; c < 256; ++c) {
    if ((a^c) == b) {
      cout << c << '\n';
      return 0;
    }
  }
  return 0;
}
