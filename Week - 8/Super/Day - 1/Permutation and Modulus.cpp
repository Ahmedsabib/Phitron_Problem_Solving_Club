#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
  	int n;
  	cin >> n;
  	vector<int> a(n + 1);
  	for (int i = 1; i <= n; ++i) {
  		a[i] = i;
  	}
  	for (int i = 1; i <= n - 1; ++i) {
  		swap(a[i], a[i + 1]);
  	}
  	for (int i = 1; i <= n; ++i) {
  		cout << a[i] << ' ';
  	}
  	cout << '\n';
  }
  return 0;
}
