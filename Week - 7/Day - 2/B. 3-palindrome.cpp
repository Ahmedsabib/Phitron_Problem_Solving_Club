#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(0);

  int n;
  cin >> n;
  string s;
  for(int i = 0; i < n; ++i){
   s += "aa";
   s += "bb";
  }
  while(s.size() > n) s.pop_back();
  cout << s << '\n';
  return 0;
}
