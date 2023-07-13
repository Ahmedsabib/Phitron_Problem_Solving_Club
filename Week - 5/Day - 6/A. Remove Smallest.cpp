#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long int n;
    while(t--){
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a+n);
        int m = 0;
        for(int i = 0; i < n-1; ++i)
        if(a[i+1] - a[i] > 1) m = 1;
        if(!m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
