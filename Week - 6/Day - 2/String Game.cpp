#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      char x = s[i];
      if (st.empty()) {
        st.push(x);
        continue;
      }
      if (st.top() != x) {
        ++ans;
        st.pop();
      }
      else {
        st.push(x);
      }
    }
    if (ans == 0) {
      cout << "Ramos\n";
    }
    else {
      if (ans%2 == 1) {
        cout << "Zlatan\n";
      }
      else {
        cout << "Ramos\n";
      }
    }
  }
  return 0;
}
