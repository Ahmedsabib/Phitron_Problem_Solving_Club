#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  long long n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  long long i = 0, j = n - 1, sum_front = 0, sum_back = 0, maxi = 0, prev_i = -1, prev_j = -1;
  while (i < j) {
    if (i == 0 && j == n - 1) {
      sum_front += a[i];
      sum_back += a[j];
      prev_i = i;
      prev_j = j;
    }
    else {
      if (prev_i != i) {
        sum_front += a[i];
        prev_i = i;
      }
      if (prev_j != j) {
        sum_back += a[j];
        prev_j = j;
      }
    }
    if (sum_front == sum_back) {
      maxi = sum_back;
      ++i;
      --j;
    }
    else {
      if (sum_front < sum_back) {
        ++i;
      }
      else {
        --j;
      }
    }
  }
  cout << maxi << '\n';
  return 0;
}
