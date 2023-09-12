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
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }

void test_case() {
  int N;
  scanf("%d", &N);
  vector<long long> A(N), B(N);
  for (int i = 0; i < N; ++i) {
    scanf("%lld", &A[i]);
  }
  for (int i = 0; i < N; ++i) {
    scanf("%lld", &B[i]);
  }
  vector<long long> sum(N + 1);
  for (int i = 0; i < N; ++i) {
    sum[i + 1] = sum[i] + B[i];
  }
  vector<long long> freq(N + 1), adding(N + 1);
  for (int i = 0; i < N; ++i) {
    int j = upper_bound(sum.begin(), sum.end(), A[i] + sum[i]) - sum.begin() - 1;
    freq[i]++;
    freq[j]--;
    adding[j] += A[i] - sum[j] + sum[i];
  }
  for (int i = 0; i < N; ++i) {
    printf("%lld ", freq[i] * B[i] + adding[i]);
    freq[i + 1] += freq[i];
  }
  printf("\n"); 
}

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    test_case();
  }
  return 0;
}
