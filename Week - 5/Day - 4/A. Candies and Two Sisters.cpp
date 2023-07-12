#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t, n, r;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        if(n <= 2){
            cout << "0" << endl;
            continue;
        }
        else if(n > 2){
            if(n % 2 == 0){
                r = (n/2)-1;
                cout << r << endl;
                continue;
            }
            else{
                r = (n/2);
                cout << r << endl;
                continue;
            }
        }
    }
}
