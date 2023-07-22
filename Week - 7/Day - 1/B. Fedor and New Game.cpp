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

int64_t N, M, K;

int64_t solve(int64_t x){

    int64_t ans = 0;
    for(int i = 0; i < N; ++i){
        if(x & (1 << i)){
            ++ans;
        }
    }
    return ans;
}

void run_case(){

    cin >> N >> M >> K;
    vector<int>A(M);
    for(int i = 0; i < M; ++i){
        cin >> A[i];
    }
    int64_t x; cin >> x;
    int64_t ans = 0;
    for(int i = 0; i < M; ++i){
        int64_t y = x^A[i];
        if(solve(y) <= K){
            ++ans;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    run_case();

    return 0;
}
