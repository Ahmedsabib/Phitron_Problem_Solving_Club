#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    long long total_power = 0;
    for (int i = 0; i < n; ++i) {
      while (a[i]%2 == 0) {
        ++total_power;
        a[i] /= 2;
      }
    }
    vector<long long> index_power;
    for (int i = 1; i <= n; ++i) {
      long long cur = 0, res = i;
      while (res%2 == 0) {
        ++cur;
        res /= 2;
      }
      index_power.push_back(cur);
    }
    sort(index_power.rbegin(), index_power.rend());
    if (total_power >= n) {
      cout << "0\n";
      continue;
    }
    int ans = -1;
    for (int i = 0; i < (int)index_power.size(); ++i) {
      total_power += index_power[i];
      if (total_power >= n) {
        ans = i + 1;
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}

// Logic for the problem:

// Product of an array a1 * a2 * a3... is equal to the sum
// of the power of 2 of the elements of the array. So we must
// count the power of 2 of those elements and call it total_power.
// Then, we count the power of 2 of 1...n and call store it in an
// array for each element.
// Now, if the total_power is already greater than n, then the answer
// is 0. Or else sort the array in reverse order and add it to the
// total_power (bacuse adding the largest power of 2 will give minimum number
// of eration to perform) and check when its greater than n. Then, store the
// answer and break the loop. Or the answer is -1.
