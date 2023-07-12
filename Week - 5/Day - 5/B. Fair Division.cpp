#include <bits/stdc++.h>

int main() {
  using namespace std;
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  
  int T; cin >> T;
  while(T--){
   long long N; cin >> N;
   int A[N];
   for(int i = 0; i < N; ++i){
    cin >> A[i];
   }
   long long one = 0, two = 0;
   for(int i = 0; i < N; ++i){
    if(A[i] == 1) ++one;
    else ++two;
   }
   two %= 2;
   bool ok = one%2 == 0 and (two == 0 or one >= 2);
   if(ok) cout << "YES" << '\n';
   else cout << "NO" << '\n';
  }
  return 0;
}
