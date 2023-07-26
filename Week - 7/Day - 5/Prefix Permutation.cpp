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
  int N;
  cin >> N;
  vi A(N + 1);
  rep(i, 1, N + 1) {
    A[i] = i;
  }
  for (int i = 3; i <= N - 1; i += 2) {
    swap(A[i], A[i + 1]);
  }
  int ok = 0;
  ll sum = A[1];
  rep(i, 2, N + 1) {
    sum += A[i];
    if (sum%i == 0) {
      ok = 1;
      break;
    }
  }
  if (ok) {
    cout << "-1\n";
  }
  else {
    rep(i, 1, N + 1) {
      cout << A[i] << ' ';
    }
    cout << '\n';
  }
  // cout << ok << '\n';
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    test_case();
  }
  return 0;
}
