#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for (int i = n - 1; i >= 0; ) {
      if (s[i] != '0') {
        ans = (char)('a' + ((s[i] - '0') - 1)) + ans;
        --i;
      }
      else {
        int j = i - 1;
        string x = "";
        while (j != i - 3) {
          x = s[j] + x;
          --j;
        }
        ans = (char)('a' + (stoi(x) - 1)) + ans;
        i -= 3;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
