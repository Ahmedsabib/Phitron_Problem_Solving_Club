#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n, sum = 0;
  cin >> n;
  for(int i = 1; i <= n; ++i){
    int a;
    cin >> a;
    sum += a&1;
  }
  cout << min(sum, n - sum) << '\n';
  return 0;
}
