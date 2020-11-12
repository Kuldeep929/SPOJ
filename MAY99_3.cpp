// diophantine equations + corner case -> drink only once so one must be able to hold atleast z litres.

#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main(){
    int t; cin >> t;
    while(t--){
        int x,y,z; cin >> x >> y >> z;
        if(max(x,y)<z) 
            cout << "NO" <<endl;
        else if(z%gcd(x,y)==0) 
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}