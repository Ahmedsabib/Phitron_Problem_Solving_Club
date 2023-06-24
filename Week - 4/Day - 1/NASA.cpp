#include <iostream>
#include<vector>
#include<unordered_map>
#include<string>
#define int long long
using namespace std;
bool check(int i){
    int s=0;
    string g=to_string(i);
    int e=g.length()-1;
    while(s<e){
        if(g[s]!=g[e]){
            return false;
        
        }
        s++;
        e--;
    }
    return true;
}
signed main() {
	int t;
	cin>>t;
	vector<int>palin;
	for(int i=0;i<32768;i++){
	    if(check(i)==true){
	        palin.push_back(i);
	    }
	}
	while(t>0){
	    int n;
	    cin>>n;
	    int ans=0;
	    vector<int>v(n,0);
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        m[v[i]]++;
	    }
	    for(int i=0;i<n;i++){
	    
	        for(int j=0;j<palin.size();j++){
	            int k=v[i]^palin[j];
	            if(m[k]>0){
	             //   cout<<k<<" "<<m[k]<<endl;
	                ans+=m[k];
	            }
	        }
	        m[v[i]]--;
	    }
	    cout<<ans<<endl;
	    t--;
	}
	return 0;
}
