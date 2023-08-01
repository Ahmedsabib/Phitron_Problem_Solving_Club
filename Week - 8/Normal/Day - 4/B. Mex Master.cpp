#include <bits/stdc++.h>

#define ll long long
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

void test_case() {
  int n;
  cin >> n;
  vi a(n);
  int zeros = 0, ones = 0, others = 0;
  rep(i, 0, n) {
    cin >> a[i];
    if (a[i] == 0) {
      ++zeros;
    }
    else if (a[i] == 1) {
      ++ones;
    }
    else {
      ++others;
    }
  }
  if (zeros == 0 || zeros * 2 <= n) {
    cout << "0\n";
  }
  else if (zeros == n) {
    cout << "1\n";
  }
  else if ((n - zeros) + 1 == zeros) {
    cout << "0\n";
  }
  else {
    if (others > 0) {
      cout << "1\n";
    }
    else {
      cout << "2\n";
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    test_case();
  }
  return 0;
}
