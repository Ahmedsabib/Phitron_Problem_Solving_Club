#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    if (n >= 5) cout << "Alice\n";
    else cout << "Bob\n";
  }
  return 0;
}
