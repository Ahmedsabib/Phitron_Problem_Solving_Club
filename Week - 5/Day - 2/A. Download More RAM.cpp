#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int N, M;
	cin >> N >> M;
	vector<pair<int, int>> A(N);

	for (int i = 0; i < N; ++i) {
		int x;
		cin >> x;
		A[i].first = x;
	}

	for (int i = 0; i < N; ++i) {
		int x;
		cin >> x;
		A[i].second = x;
	}

	sort(A.begin(), A.end());
	int64_t has = M;

	for (int i = 0; i < N; ++i) {
		if (has < A[i].first)
			break;

		has += A[i].second;
	}

	cout << has << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
