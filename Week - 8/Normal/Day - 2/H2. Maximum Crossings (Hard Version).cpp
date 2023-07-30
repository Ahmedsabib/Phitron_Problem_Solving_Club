#include <bits/stdc++.h>

using namespace std;

template<class T>
struct BIT {
  int n;
  vector<T> t;
  BIT(int _n) {
    n = _n;
    t.assign(n + 1, 0);
  }
  T query(int index) {
    T ans = 0;
    for (; index >= 1; index -= (index & (-index))) {
      ans += t[index];
    }
    return ans;
  }
  void update(int index, T val) {
    if (index <= 0) {
      return;
    }
    for (; index <= n; index += (index & (-index))) {
      t[index] += val;
    }
  }
  void update(int l, int r, T val) {
    update(l, val);
    update(r + 1, -val);
  }
  T query(int l, int r) {
    return query(r) - query(l - 1);
  }
};

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    BIT<int> bit(n + 1);
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
      ans += i - bit.query(a[i] - 1);
      bit.update(a[i], 1);
    }
    cout << ans << '\n';
  }
  return 0;
}
