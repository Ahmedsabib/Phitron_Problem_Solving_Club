#include <algorithm>
#include <array>
#include <bitset>
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

void run_case() {
	string S;
	cin >> S;
	int N = (int)S.size();
	vector<int> A;
	A.push_back(0);

	for (int i = 0; i < N; ++i) {
		if (S[i] == 'R')
			A.push_back(i+1);
	}

	A.push_back(N+1);

	int ans = 0;

	for (int i = 0; i < (int)A.size()-1; ++i) {
		ans = max(ans, A[i+1] - A[i]);
	}

	cout << ans << '\n';
}

int main() {
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
