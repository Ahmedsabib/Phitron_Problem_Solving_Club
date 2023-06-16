#include <bits/stdc++.h>
using namespace std;
void test_case() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int ans = 0;
  if (b > a) {
    ++ans;
  }
  if (c > a) {
    ++ans;
  }
  if (d > a) {
    ++ans;
  }
  cout << ans << '\n';
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
