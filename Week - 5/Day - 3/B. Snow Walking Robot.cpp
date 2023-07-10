#include <bits/stdc++.h>
using namespace std;

void run_case() {
  string S;
  cin >> S;
  int N = (int)S.size();
  int l = 0, r = 0, d = 0, u = 0;

  for (int i = 0; i < N; ++i) {
    if (S[i] == 'L') ++l;
    else if (S[i] == 'U') ++u;
    else if (S[i] == 'D') ++d;
    else ++r;
  }

  int a = min(l, r);
  int b = min(u, d);

  if (min(a, b) == 0) {
    if (a == 0) {
      b = min(b, 1);
      
      cout << 2*b << '\n';
      cout << string(b, 'U') << string(b, 'D') << '\n';
    }
    else {
      a = min(a, 1);
      
      cout << 2*a << '\n';
      cout << string(a, 'R') << string(a, 'L') << '\n';
    }
  }
  else {
    string ans;
    ans += string(a, 'L');
    ans += string(b, 'U');
    ans += string(a, 'R');
    ans += string(b, 'D');

    cout << (int)ans.size() << '\n';
    cout << ans << '\n';
  }
}

int main() {
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
