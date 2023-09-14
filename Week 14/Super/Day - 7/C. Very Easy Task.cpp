#include <bits/stdc++.h>
using namespace std;
long long n, y, x;
bool good(long long l) {
	return (l/x) + (l/y) >= n-1;
}
int main(int argc, char const *argv[]) {
	scanf("%lld %lld %lld", &n, &x, &y);
	if (n == 1) {
		printf("%lld\n", min(x, y));
		return 0;	
	}
	long long low = 0, high = 2e9 + 7;
	while (low + 1 < high) {
		long long mid = low + (high - low)/2;
		if (good(mid)) {
      		high = mid;
    	}
    	else {
      		low = mid;
      	}
    }  
	printf("%lld\n", high + min(x, y));
	return 0;
}
