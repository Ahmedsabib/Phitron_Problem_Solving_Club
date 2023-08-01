#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
  	int n;
  	cin >> n;
  	vector<long long> a(n);
  	for (int i = 0; i < n; ++i) {
  		cin >> a[i];
  	}
  	map<long long, long long> mp;
  	for (int i = 0; i < n; ++i) {
  		mp[a[i]]++;
  	}
  	int ok = 0;
  	for (auto& x: mp) {
  		if (x.second%2 == 1) {
  			ok = 1;
  			break;
  		}
  	}
  	if (!ok) {
  		cout << "Zenyk\n";
  	}
  	else {
  		cout << "Marichka\n";
  	}
  }
  return 0;
}
