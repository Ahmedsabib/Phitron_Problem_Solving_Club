#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll rev(ll y) {
	ll x = 0;
	while (y) {
		x *= 10;
		x += y % 10;
		y /= 10;
	}
	return x;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		long m;
		cin >> m;
		long rn = rev(m);
		int cnt = 0;
		while (rn != m) {
			m += rn;
			rn = rev(m);
			++cnt;
		}
		cout << cnt << " " << m << endl;
	}
}
