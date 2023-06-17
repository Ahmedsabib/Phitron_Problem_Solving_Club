#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    string s;
    cin >> n >> s;
    long long ans = 0;
    vector<long long> a;
    for (int i = 0; i < n; ++i) {
      long long l = i, r = n - 1 - i;
      if (s[i] == 'R') {
        swap(l, r);
      }
      ans += l;
      a.push_back(max(0LL, r - l));
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n; ++i) {
      ans += a[i];
      cout << ans << ' ';
    }
    cout << '\n';
  }
  return 0;
}
