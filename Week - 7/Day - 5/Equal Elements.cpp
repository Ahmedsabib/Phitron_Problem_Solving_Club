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
  vi A(N);
  rep(i, 0, N) {
    cin >> A[i];
  }
  map<ll, ll> mp;
  rep(i, 0, N) {
    mp[A[i]]++;
  }
  ll maxi = 0;
  for (auto& x: mp) {
    maxi = max(maxi, x.second);
  }
  cout << N - maxi << '\n';
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
