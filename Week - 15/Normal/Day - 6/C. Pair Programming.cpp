#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int k, n, m; cin >> k >> n >> m;
		vector<int> a(n), b(m);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i < m; ++i) {
			cin >> b[i];
		}
		vector<int> v;
		int x = 0, y = 0, flag = 1;
		while(x != n || y != m) {
			if(x != n && a[x] == 0) {
				v.push_back(0);
				++k;
				++x;
			}
			else if (y != m && b[y] == 0) {
				v.push_back(0);
				++k;
				++y;
			}
			else if (x != n && a[x] <= k) {
				v.push_back(a[x++]);
			}
			else if (y != m && b[y] <= k) {
				v.push_back(b[y++]);
			}
			else {
				flag = 0;
				break;
			}
		}
		if (!flag) {
			cout << -1 << '\n';
			continue;
		}
		for (auto&x : v) {
			cout << x << ' ';
		}
		cout << '\n';
	}
}
