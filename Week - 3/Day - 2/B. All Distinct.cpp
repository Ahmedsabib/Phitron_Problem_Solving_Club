#include <bits/stdc++.h>
using namespace std;
void test_case() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int cnt = unique(a.begin(), a.end()) - a.begin();
  if (cnt%2 != n%2) {
    --cnt;
  }
  cout << cnt << '\n';
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    test_case();
  }
  return 0;
}
