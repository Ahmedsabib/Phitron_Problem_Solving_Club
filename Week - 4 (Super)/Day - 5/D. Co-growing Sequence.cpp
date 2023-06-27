#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef set<int> si;
typedef pair<int,int> pi;
typedef map<int, int> mp;
typedef vector<pair<int, int>> vpi;

#define F0R(i, a) for (int i=0; i<(a); i++)
#define FOR(i, a) for (int i=a-1; i>=0; i--)
#define REP(i,a,b) for (int i=a; i<(b); i++)
#define PER(i,a,b) for (int i=b-1; i >=(a); i--)
#define Trav(a, x) for (auto& a: x)

#define sz(x) (int)(x).size()
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UB upper_bound
#define all(x) x.begin(), x.end()

//Find my template here https://github.com/Ahmedsabib/USACO/blob/main/Templates/Own%20Macro%20Template.cpp

template<class T> bool ckmin(T& a, const T& b) { 
	return b < a ? a = b, 1 : 0; 
}
 
template<class T> bool ckmax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0; 
}
 
template<class Fun>
class y_combinator_result {
    Fun fun_;
public:
    template<class T>
    explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
 
    template<class ...Args>
    decltype(auto) operator()(Args &&...args) {
        return fun_(std::ref(*this), std::forward<Args>(args)...);
    }
};
 
template<class Fun>
decltype(auto) y_combinator(Fun &&fun) {
    return 	y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
}

void dbg_out() { cerr << endl; }

template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H; dbg_out(T...); 
}

const int MOD = 1000000007;

void solve() {

	ll n; cin >> n;
	ll ans = 0;
	F0R(i, n) {
		ll x; cin >> x;
		ans |= x;
		cout << (ans^x) << ' ';
	}
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int T; cin >> T;
	while(T--) {
		solve();
	}

	return 0;
}
