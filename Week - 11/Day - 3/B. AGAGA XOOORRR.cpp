#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1000000007;
const int MX = 100001;

void solve() {

    ll N; std::cin >> N;
    vi A(N); F0R(i, N) std::cin >> A[i];
    ll a = 0; F0R(i, N) a ^= A[i];
    if(a == 0){
    	std::cout << "YES" << '\n';
    	return;
    }
    ll cur = 0, pos1 = -1;
    F0R(i, N){
    	cur ^= A[i];
    	if(cur == a){
    		pos1 = i+1;
    		break;
    	}
    }
    cur = 0;
    ll pos2 = -1;
    F0Rd(i, N){
    	cur ^= A[i];
    	if(cur == a){
    		pos2 = i+1;
    		break;
    	}
    }
    if(pos1 < pos2){
    	std::cout << "YES" << '\n';
    }
    else std::cout << "NO" << '\n';

}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }

	return 0;
}
