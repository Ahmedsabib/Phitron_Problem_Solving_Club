#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
    	scanf("%lld", &arr[i]);
    }
    long long ans = arr[0];
    for (int i = 1; i < n; ++i) {
    	ans = ans&arr[i];
    }
    printf("%lld\n", ans);
  }
  return 0;
}
