#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    string t;
    cin >> t;
    string s = t;
    reverse(s.begin(), s.end());
    cout << t << s << '\n';
  }
  return 0;
}
