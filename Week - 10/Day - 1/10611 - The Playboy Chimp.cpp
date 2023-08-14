#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll heights[50005];

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; ++i)
    cin >> heights[i];
  int Q;
  cin >> Q;
  while (Q--) {
    int height;
    cin >> height;
    ll * above = upper_bound(heights, heights + N, height);
    ll * below = above;
    --below;
    while (below >= heights && *below == height) {
      --below;
    }
    if (below >= heights) {
      cout << *below << ' ';
    }
    else {
      cout << "X ";
    }
    if (above == heights + N) {
      cout << "X\n";
    }
    else {
      cout << *above << '\n';
    }
  }
}
