#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
      cin >> b[i];
    }
    long long max_value = -1e18;
    vector<long long> max_indices;
    for (int i = 0; i < n; i++) {
      if (a[i] - b[i] > max_value) {
        max_value = a[i] - b[i];
        max_indices = {i};
      }
      else if (a[i] - b[i] == max_value) {
        max_indices.push_back(i);
      }
    }
    cout << max_indices.size() << '\n';
    for (int i = 0; i < (int)max_indices.size(); ++i) {
      cout << max_indices[i] + 1 << ' ';
    }
    cout << '\n';
  }
  return 0;
}
