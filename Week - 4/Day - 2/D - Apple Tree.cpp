#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 5;

vector<long long> graph[maxn];
long long visited[maxn], cnt[maxn];

long long dfs(int node) {
  visited[node] = 1;
  long long ans = 0;
  for (auto& edges: graph[node]) {
    if (!visited[edges]) {
      ans += dfs(edges);
    }
  }
  cnt[node] = max(1LL, ans);
  return cnt[node];
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int tests;
  cin >> tests;
  for (int cases = 0; cases < tests; ++cases) {
    memset(visited, 0, sizeof(visited));
    memset(cnt, 0, sizeof(cnt));
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
      int u, v;
      cin >> u >> v;
      graph[u].push_back(v);
      graph[v].push_back(u);
    }
    dfs(1);
    int q;
    cin >> q;
    while (q--) {
      int x, y;
      cin >> x >> y;
      cout << 1LL * cnt[x] * cnt[y] << '\n';
    }
    for (int i = 1; i <= n; ++i) {
      graph[i].clear();
    }
  }
  return 0;
}

// Logic for this problem:

// count the number of leaf nodes of the vertices
// Because the apples are gonna fall from its leaf
// nodes. As there are two apples, count the leaf nodes
// for every apple and multiply it to get the answer

//---------------------------------------------------------------------------------------------------------------------
