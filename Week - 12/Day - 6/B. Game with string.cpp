#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  string s;
  cin >> s;
  int cnt = 0;
  stack<char> st;
  for (auto& ch: s) {
    if ((int)st.size() && ch == (int)st.top()) {
      ++cnt;
      st.pop();
    }
    else {
      st.push(ch);
    }
  }
  cout << (cnt&1 ? "YES\n" : "NO\n");
  return 0;
}
