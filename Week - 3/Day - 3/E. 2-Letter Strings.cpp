#include <bits/stdc++.h>

using namespace std;

const int MAX = (int) 1e5 + 7;

int n;
char s[MAX], t[MAX];
long long ans;

void test_case() {
  scanf("%d", &n);
  vector<vector<int>> freq(12, vector<int> (12, 0));
  ans = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%s", s);
    for (int j = 0; j < 2; ++j) {
      for (char ch  = 'a'; ch <= 'k'; ++ch) {
        if (s[j] == ch) {
          continue;
        }
        for (int k = 0; k < 2; ++k) {
          t[k] = s[k];
        }
        t[j] = ch;
        ans += freq[t[0] - 'a'][t[1] - 'a'];
      }
    }
    ++freq[s[0] - 'a'][s[1] - 'a'];
  }
  printf("%lld\n", ans);
}

int main(int argc, char const *argv[]) {
  int T;
  scanf("%d", &T);
  while (T--) {
    test_case();
  }
  return 0;
}
