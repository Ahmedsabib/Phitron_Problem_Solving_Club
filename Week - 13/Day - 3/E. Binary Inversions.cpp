#include <bits/stdc++.h>

using namespace std;

long long check(map<long long, long long> mp) {
  long long sum = 0;
  for (auto& x: mp) {
    sum += x.second;
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  
  int tc;
  cin >> tc;
  for (int cs = 0; cs < tc; ++cs) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    map<long long, long long> mp;
    long long cnt = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] == 1) {
        ++cnt;
      }
      else {
        mp[i] = cnt;
      }
    }
    long long maxi = 0;
    maxi = check(mp);
    mp.clear();
    cnt = 0;
    vector<long long> b = a;
    for (int i = 0; i < n; ++i) {
      if (a[i] == 0) {
        a[i] = 1;
        break;
      }
    }
    for (int i = 0; i < n; ++i) {
      if (a[i] == 1) {
        ++cnt;
      }
      else {
        mp[i] = cnt;
      }
    }
    maxi = max(maxi, check(mp));
    cnt = 0;
    mp.clear();
    for (int i = n - 1; i >= 0; --i) {
      if (b[i] == 1) {
        b[i] = 0;
        break;
      }
    }
    for (int i = 0; i < n; ++i) {
      if (b[i] == 1) {
        ++cnt;
      }
      else {
        mp[i] = cnt;
      }
    }
    maxi = max(maxi, check(mp));
    cout << maxi << '\n';
  }
  return 0;
}
