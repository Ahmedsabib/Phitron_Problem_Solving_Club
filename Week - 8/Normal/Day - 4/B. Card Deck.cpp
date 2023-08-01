#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int N; cin >> N;
    vector<int>A(N+1, 0), B(N+1, 0);
    for(int i = 1; i <= N; ++i){
     cin >> A[i];
     B[A[i]] = i;
    }
    vector<int>res;
    int r = N;
    for(int i = N; i > 0; --i){
     if(B[i] <= r){
      for(int j = B[i]; j <= r; ++j){
       res.push_back(A[j]);
      }
      r = B[i] - 1;
     }
    }
    for(int x: res) cout << x << ' ';
    cout << '\n';
  }
  return 0;
}
