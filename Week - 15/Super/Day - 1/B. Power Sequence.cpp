#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long n;
  cin >> n;
  vector<long long>a(n);
  for(int i = 0; i < n; ++i){
   cin >> a[i];
  }
  sort(a.begin(), a.end());
  long long ans = 1e18;
  for(long long i = 1; ; ++i){
   long long val = 1, cnt = 0;
   bool flag = true;
   for(long long j = 0; j < n; ++j){
    cnt += abs(val - a[j]);
    val *= i;
    if(cnt > ans){
     flag = false;
     break;
    }
   }
   if(!flag){
    break;
   }
   ans = cnt;
  }
  cout << ans << '\n';
  return 0;
}
  
