#include<iostream>
using namespace std;

int main(){
    while(true){
        int n;cin >>n;
        if(n==0)
            break;
        int squares = (n * (n+1) * (2*n+1))/6;
        cout << squares << endl;
    }
    return 0;
}