#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef set<int> si;
typedef set<ll> sl;
typedef multiset<int> msi;
typedef multiset<ll> msl;

typedef map<int,int> mpii;
typedef map<ll,ll> mpll;
typedef map<char,int> mpci;
typedef map<char,ll> mpcl;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=1; i<=(a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define REP(i, a, x) for(int i=0; i < (a); i+= x)
#define PER(i, a, b, x) for(int i=a; i < (b); i+=x)
#define REPd(i, a, x) for(int i=(a)-1; i >= 0; i-=x)
#define PERd(i, a, b, x) for(int i=(b)-1; i >= a; i-=x)
#define trav(a, x) for (auto& a : x)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
const int MOD = 1000000007;
const int MX = 100001;

ll a[200009];

void solve() {
    
    ll n, l, r; cin >> n >> l >> r;
    F0R(i, n) cin >> a[i];
    sort(a+1, a+n+1);
    ll low, high, mid, first_position = -1, second_position = -1, ans = 0;
    FOR(i, 1, n){
        low = i+1;
        high = n;
        while(low <= high){
            mid = (low+high)/2;
            if(a[i]+a[mid] < l){
                low = mid+1;
            } else{
                high = mid-1;
            }
        }
        first_position = low;
        low = i+1;
        high = n;
        while(low <= high){
            mid = (low+high)/2;
            if(a[i]+a[mid] <= r){
                low = mid+1;
            } else{
                high = mid-1;
            }
        }
        second_position = high;
        if(first_position <= n){
            ans += (second_position - first_position) + 1;
        }
    }
    cout << ans << '\n';
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
