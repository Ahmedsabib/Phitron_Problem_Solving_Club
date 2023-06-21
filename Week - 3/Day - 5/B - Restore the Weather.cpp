#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n, d;
    cin >> n >> d;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i].first;
      a[i].second = i;
    }
    sort(a.begin(),a.end());
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(b.begin(),b.end());
    vector<pair<int,int>> c;
    for (int i = 0; i < n; i++) {
      c.push_back({a[i].second,b[i]});
    }
    sort(c.begin(),c.end());
    for (int i = 0; i < n; i++) {
      cout << c[i].second << " ";
    }
    cout << "\n";
  }
  return 0;
}
