#include<bits/stdc++.h>

using namespace std;

int main() {
    int arra[4];
    for(int i = 0; i < 4; i++){
        cin >> arra[i];
    }
    sort(arra, arra + 4);
    int c = arra[3] - arra[0];
    int b = arra[3] - arra[1];
    int a = arra[3] - arra[2];
    cout << a << " " << b << " " << c;
}
