#include <bits/stdc++.h>
using namespace std;

const int INF = (int) 1e9 + 7;

void run_case() {
	int N;
	cin >> N;
	string S;
	cin >> S;
	int ans = INF;

	for (char i = 'a'; i <= 'z'; ++i) {
		int low = 0, high = N - 1;
		int cnt = 0;

		while (low <= high) {
			if (S[low] == S[high]) {
				++low;
				--high;
			}
			else if (S[low] == i) {
				++low;
				++cnt;
			}
			else if (S[high] == i) {
				--high;
				++cnt;
			}
			else {
				cnt = INF;
				break;
			}
		}

		ans = min(ans, cnt);
	}

	cout << (ans == INF? -1 : ans) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
