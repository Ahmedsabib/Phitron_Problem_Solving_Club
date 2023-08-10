#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  int t;
  cin >> t;
  while (t--) {
    string x;
    cin >> x;
    int N = x.size();
    int p = -1;
    int q = N;
    for (int i = 0; i < N; i++){
      if (x[i] >= '5'){
        p = min(q, i);
        break;
      }
      if (x[i] == '4'){
        if (q == N){
          q = i;
        }
      } else {
        q = N;
      }
    }
    if (p != -1){
      x[p] = '0';
      for (int i = p + 1; i < N; i++){
        x[i] = '0';
      }
      if (p == 0){
        x.insert(x.begin(), '1');
      }
      for (int i = p - 1; i >= 0; i--){
        x[i]++;
        if (x[i] > '9'){
          if (i > 0){
            x[i] = '0';
          } else {
            x[i] = '0';
            x.insert(x.begin(), '1');
          }
        } else {
          break;
        }
      }
    }
    cout << x << '\n';
  }
}
