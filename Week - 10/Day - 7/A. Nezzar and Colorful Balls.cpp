#include <bits/stdc++.h>

int main() {
  using namespace std;
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  
  int T; cin >> T;
  while(T--){
   int N; cin >> N;
   int A[N];
   for(int i = 0; i < N; ++i){
    cin >> A[i];
   }
   int ans = 0, cnt = 1;
   for(int i = 0; i < N; ++i){
    if(A[i] == A[i+1]) ++cnt;
    else cnt = 1;
    ans = max(ans, cnt);
   }
   cout << ans << '\n';
  }
  return 0;
}
