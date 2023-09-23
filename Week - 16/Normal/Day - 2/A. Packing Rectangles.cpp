#include <bits/stdc++.h>

using namespace std;

long long w, h, n;

bool good(long long x) {
	return (x/h) * (x/w) >= n;
}

int main(int argc, char const *argv[]) {
	scanf("%lld %lld %lld", &w, &h, &n);
	long long low = 0, high = 1;
	while (!good(high)) {
		high *= 2;	
	}
	while (low + 1 < high) {
		long long mid = low + (high - low)/2;
		if (good(mid)) {
			high = mid;
		}
		else {
			low = mid;
		}
	}
	printf("%lld\n", high);
	return 0;
}
