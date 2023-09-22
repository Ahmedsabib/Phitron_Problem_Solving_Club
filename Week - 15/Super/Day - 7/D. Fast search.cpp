#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	scanf("%d", &n);
	vector<long long> a(n);
	for (int i = 0; i < n; ++i) {
		scanf("%lld", &a[i]);
	}
	sort(a.begin(), a.end());
	int q;
	scanf("%d", &q);
	while (q--) {
		long long l, r;
		scanf("%lld %lld", &l, &r);
		long long pos1 = -1, pos2 = -1;
		long long low = -1, high = n;
		while (low + 1 < high) {
			long long mid = low + (high - low)/2;
			if (a[mid] < l) {
				low = mid;
			}
			else {
				high = mid;
			}
		}
		pos1 = high + 1;
		low = -1, high = n;
		while (low + 1 < high) {
			long long mid = low + (high - low)/2;
			if (a[mid] <= r) {
				low = mid;
			}
			else {
				high = mid;
			}
		}
		pos2 = low + 1;
		long long ans = pos2 - pos1 + 1;
		printf("%lld ", ans);
	}
	printf("\n");
	return 0;
}
