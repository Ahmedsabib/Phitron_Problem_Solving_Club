#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, a, b;
    cin >> n >> a >> b;
    vector<char> l(a);
    for (int i = 0; i < a; i++){
      l[i] = 'a' + min(i, b - 1);
    }
    for (int i = 0; i < n; i++){
      cout << l[i % a];
    }
    cout << '\n';
  }
  return 0;
}
