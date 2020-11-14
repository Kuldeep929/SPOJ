#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int a,b; cin >>a>>b;
        if(a<4)
            cout << min(3,b)-a+1 <<endl;
        else
            cout << 0 << endl;
    }
    return 0;
}