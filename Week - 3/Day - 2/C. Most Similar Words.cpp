#include <bits/stdc++.h>

using namespace std;

const int MAX = (int) 1e5 + 7;

void test_case() {
	int n, m;
	cin >> n >> m;
	vector<string> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	long long ans = MAX;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			long long sum = 0;
			if (i != j) {
				for (int k = 0; k < m; ++k) {
					int x = (a[i][k] - 'a') + 1;
					int y = (a[j][k] - 'a') + 1;
					int mini = min(x, y);
					int maxi = max(x, y);
					sum += maxi - mini;
				}
				ans = min(ans, sum);
			}
		}
	}
	cout << ans << '\n';
}

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while (T--) {
		test_case();
	}
	return 0;
}
