#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
      cin >> b[i];
    }
    int ok = 0, start_ind = -1, end_ind = -1;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n - 1; ++i) {
      if (b[i] <= b[i + 1]) {
        if (a[i] != b[i]) {
          ok = 1;
        }
        if (start_ind == -1) {
          start_ind = i;
        }
      }
      else {
        end_ind = i;
        if (a[i] != b[i]) {
          ok = 1;
        }
        if (ok) {
          ans.push_back({start_ind, end_ind});
        }
        start_ind = -1;
        end_ind = -1;
        ok = 0;
      }
    }
    if (start_ind != -1 && ((b[n - 1] != a[n - 1] || ok))) {
      ans.push_back({start_ind, n - 1});
    }
    pair<int, int> pos;
    int dist = 0;
    for (int i = 0; i < (int)ans.size(); ++i) {
      if (dist < ans[i].second - ans[i].first) {
        dist = ans[i].second - ans[i].first;
        pos = {ans[i].first, ans[i].second};
      }
    }
    cout << pos.first + 1 << ' ' << pos.second + 1 << '\n';
  }
  return 0;
}
