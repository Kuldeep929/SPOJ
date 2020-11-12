#include<iostream>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main(){
    int t; cin >> t;
    for(int i=1;i<=t;i++){
        int a,b,c;cin >> a>>b>>c;

        if(c%gcd(a,b)==0)
            cout << "Case "<<i <<": Yes"<<endl;
        else
            cout << "Case "<<i <<": No"<<endl;
    }
    return 0;
}