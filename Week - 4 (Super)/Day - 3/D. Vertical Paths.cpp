#include <algorithm>
#include <array>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>

using namespace std;

#define LL long long

void solve() {
  int N;
  scanf("%d", &N);
  vector<int> A(N + 1);
  vector<bool> node(N + 1, true);
  for (int i = 1; i <= N; ++i) {
    scanf("%d", &A[i]);
    node[A[i]] = false;
  }
  if (N == 1) {
    printf("1\n1\n1\n");
    return;
  }
  vector<int> path[N + 1];
  vector<bool> vis(N + 1, false);
  int color = 0;
  for (int i = 1; i <= N; ++i) {
    if (!node[i]) {
      continue;
    }
    vis[i] = true;
    path[color].emplace_back(i);
    int X = i;
    while (A[X] != X && !vis[A[X]]) {
      X = A[X];
      vis[X] = true;
      path[color].emplace_back(X);
    }
    ++color;
  }
  printf("%d\n", color);
  for (auto& x: path) {
    if (x.empty()) {
      continue;
    }
    printf("%d\n", (int)x.size());
    reverse(x.begin(), x.end());
    for (auto& y: x) {
      printf("%d ", y);
    }
    printf("\n");
  }
}

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    solve();
  }
  return 0;
}
