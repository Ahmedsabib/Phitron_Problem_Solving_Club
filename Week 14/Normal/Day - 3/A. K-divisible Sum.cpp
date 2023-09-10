#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T; cin >> T;
  while(T--){
	long long N, K; cin >> N >> K;
	long long x = (N+K-1)/K;
	x *= K;
	cout << (x+N-1)/N << '\n';
  }
  return 0;
}
