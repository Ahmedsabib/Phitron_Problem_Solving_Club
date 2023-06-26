#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;

typedef long long ll;
typedef long double ld;

//pairs
typedef pair<int, int> pi;
typedef pair<long long, long long> pl;
typedef pair<long double, long double> pd;

//vectors
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<long long> vl;
typedef vector<long double> vd;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvl;

//sets
typedef set<int> si;
typedef set<long long> sl;
typedef set<long double> sd;

//maps
typedef map<int, int> mpi;
typedef map<char, int> mpc;
typedef map<long long, long long> mpl;
typedef map<long double, long double> mpd;

//iterators
#define trav(a, x) for (auto& a: x)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define R0F(i, a) for (int i = a-1; i >= 0; i--)
#define REP(i, a, b) for (int i = a; i < (b); i++)
#define PER(i, a, b) for (int i = b-1; i >= (a); i--)
#define FOR(i, a, b, x) for (int i = a; i < b; i += x)
#define ROF(i, a, b, x) for (int i = a-1; i >= (b); i -= x)

//useful macros
#define str string
#define rsz resize
#define ins insert
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define PF push_front
#define LB lower_bound
#define UB upper_bound
#define EB emplace_back
#define bk back()
#define ft front()
#define bg(x) begin(x)
#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const int MOD = 1e9+7;
const int MAX = 100001;
const ll INF = 1e18;

/*
* Find my template here 
* https://github.com/Ahmedsabib/USACO/blob/main/Templates/Own%20Macro%20Template.cpp
*/

namespace io {
    //io template taken from bqi343
    //INPUT
    void re(double& x) { string t; cin >> t; x = stod(t); } 
    void re(ld& x) { string t; cin >> t; x = stold(t); }
    template<class T> void re(T& x) { cin >> x; }
    template<class Arg, class... Args> void re(Arg& first, Args&... rest) { 
        re(first); re(rest...); 
    }
    template<class T1, class T2> istream& operator>>(istream& is, pair<T1,T2>& p) {
        is >> p.f >> p.s; return is;
    }
    template<class T> istream& operator>>(istream& is, vector<T>& a) {
        F0R(i,sz(a)) is >> a[i];
        return is;
    }

    //OUTPUT
    template<class T> void pr(const T& x) { cout << x << '\n'; }
    template<class Arg, class... Args> void pr(const Arg& first, const Args&... rest) { 
        cout << first << ' '; pr(rest...); 
    }
    template<class T1, class T2> ostream& operator<<(ostream& os, const pair<T1,T2>& a) {
        os << '{' << a.f << ", " << a.s << '}'; return os;
    }
    template<class T> ostream& operator<<(ostream& os, const vector<T>& a) {
        F0R(i,sz(a)) {
            os << a[i] << ' ';
        }
        return os;
    }
}

using namespace io;

void solve() {
    
    ll n, k; re(n, k);
    vl a(n); re(a);
    sort(all(a));
    ll sum = 0;
    F0R(i, n-2*k) {
        sum += a[i];
    }
    REP(i, n-2*k, n-k){
        if (a[i] == a[i+k]) {
            sum++;
        }
    }
    pr(sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; re(T);
    while(T--) {
        solve();
    }

    return 0;
}
