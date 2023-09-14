#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll totballon, totworker;

struct st {
    ll t; // t minutes for each ballon
    ll z; // rest after z ballons inflated
    ll y; // rest for y minutes after z ballon inflated

};

vector<st> v;

ll fun(ll tottime, ll i) {
    ll cnt = tottime / ((v[i].t * v[i].z) + v[i].y);
    ll res = cnt * v[i].z;
    tottime %= ((v[i].t * v[i].z) + v[i].y);
    res += min(v[i].z, (tottime / v[i].t));

    return res;
}

ll calc(ll tottime) {
    ll res = 0;

    for(ll i = 0; i < totworker; i++) {
        res += fun(tottime, i);
    }

    return res;
}

int main() {

    cin >> totballon >> totworker;

    for(ll i = 0; i < totworker; i++) {
        st temp;
        cin >> temp.t >> temp.z >> temp.y;
        v.push_back(temp);
    }

    ll l = 0, r = 1e15;

    while(l + 1 <= r) {
        ll m = l + (r - l) / 2;
        if(calc(m) >= totballon) {
            r = m;
        } else l = m + 1;
    }

    cout << l << endl;

    for(ll i = 0; i < totworker; i++) {
        if(i) cout << " ";
        ll x = fun(l, i);
        if(totballon <= 0) {
            cout << 0;
            continue;
        }
        else if(totballon - x >= 0) cout << x;
        else cout << totballon;
        totballon -= x;
    }
    cout << endl;

    return 0;
}
