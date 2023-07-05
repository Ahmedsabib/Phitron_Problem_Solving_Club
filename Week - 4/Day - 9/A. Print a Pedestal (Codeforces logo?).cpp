#include <bits/stdc++.h>
using namespace std;
void test_case() {
  int n;
  scanf("%d", &n);
  if (n == 6) {
    printf("2 3 1\n");
  }
  else if (n == 7) {
    printf("2 4 1\n");
  }
  else if (n == 8) {
    printf("3 4 1\n");
  }
  else if (n == 9) {
    printf("3 4 2\n");
  }
  else if (n == 10) {
    printf("4 5 1\n");
  }
  else {
    int mod = n%3, x = n/3;
    int a = x, b = x, c = x;
    c += mod;
    b++;
    --a;
    if (b == c) {
      b++;
      --a;
    }
    if (b < c) {
      swap(b, c);
    }
    printf("%d %d %d\n", c, b, a);
  }
}
int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    test_case();
  }
  return 0;
}
