// which army wins ?
// 1. sort and compare the two army along with the conditions.
// ** 2. compare the max of one army with max of other army.

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int g,m;
        cin >> g;
        cin>>m;
        int gz[g],mgz[m];
        for(int i=0;i<g;i++)
            cin >> gz[i];
        for(int i=0;i<m;i++)
            cin >> mgz[i];
        
        sort(gz,gz+g);
        sort(mgz,mgz+m);
        if(gz[g-1]<mgz[m-1]) cout << "MechaGodzilla" << endl;
        else cout << "Godzilla";
        
    }
    return 0;
}