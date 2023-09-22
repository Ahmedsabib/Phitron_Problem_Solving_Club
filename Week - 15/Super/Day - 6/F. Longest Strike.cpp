#include <bits/stdc++.h>

using namespace std;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]"}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

void test_case() {
	int n, k;
	scanf("%d %d", &n, &k);
	vector<long long> a(n);
	for (int i = 0; i < n; ++i) {
		scanf("%lld", &a[i]);
	}
	sort(a.begin(), a.end());
	map<long long, long long> mp;
	for (int i = 0; i < n; ++i) {
		mp[a[i]]++;
	}
	vector<long long> b;
	for (int i = 0; i < n; ++i) {
		if (mp[a[i]] >= k) {
			b.push_back(a[i]);
		}
	}
	b.resize(unique(b.begin(), b.end()) - b.begin());
	if (!b.size()) {
		printf("-1\n");
		return;
	}
	else if (b.size() == 1) {
		printf("%lld %lld\n", b[0], b[0]);
		return;
	}
	long long l = b[0], first = b[0], second = b[0], maxi = 0;
	for (int i = 0; i < (int)b.size() - 1; ++i) {
		if (b[i+1]-b[i] == 1) {
			if (b[i + 1] - l > maxi) {
				maxi = b[i + 1] - l;
				first = l;
				second = b[i+1];
			}
		}
		else {
			l = b[i + 1];
		}
	}
	printf("%lld %lld\n", first, second);
}

int main(int argc, char const *argv[]) {
	int T;
	scanf("%d", &T);
	while (T--) {
		test_case();
	}
	return 0;
}
