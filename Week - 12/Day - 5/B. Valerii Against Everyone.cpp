#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt; cin >> tt;
  while(tt--){
	int N; cin >> N;
	set<int>S;
	for(int i = 0; i < N; ++i){
		int x; cin >> x;
		S.insert(x);
	}
	cout << (S.size() < N ? "YES" : "NO") << '\n';
  }
  return 0;
}
