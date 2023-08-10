#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    vector<int> b(n * (n - 1) / 2);
    for (int j = 0; j < n * (n - 1) / 2; j++){
      cin >> b[j];
    }
    sort(b.begin(), b.end());
    vector<int> a;
    int p = 0;
    for (int j = 0; j < n - 1; j++){
      cout << b[p];
      cout << ' ';
      p += n - 1 - j;
    }
    cout << 1000000000 << endl;
  }
}
