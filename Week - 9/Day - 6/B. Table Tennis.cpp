#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  long long n, k;
  cin >> n >> k;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  if (k >= n) {
    cout << *max_element(a.begin(), a.end()) << '\n';
    return 0;
  }
  deque<long long> q;
  for (int i = 0; i < n; ++i) {
    q.push_front(a[i]);
  }
  long long winner = 0, cnt = 0, prev = -1;
  while (1) {
    long long x = q.back();
    q.pop_back();
    long long y = q.back();
    q.pop_back();
    if (x < y) {
      q.push_back(y);
      q.push_front(x);
      winner = y;
    }
    else {
      q.push_back(x);
      q.push_front(y);
      winner = x;
    }
    if (prev == winner) {
      ++cnt;
    }
    else {
      cnt = 1;
      prev = winner;
    }
    if (k == cnt) {
      break;
    }
  }
  cout << winner << '\n';
  return 0;
}
