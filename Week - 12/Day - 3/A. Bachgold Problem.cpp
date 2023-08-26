#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n;
  cin >> n;
  cout << n / 2 << '\n';
  for(int i = 1; i < n / 2; i++) {
    cout << 2 << " ";
  }
  cout << 2 + n % 2 << '\n';
  return 0;
}
