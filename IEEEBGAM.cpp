// I put 1 W ball in each boxes.
// and n B ball in one box.
// 1. choose (n-1) box out of n. [only white balls] and then choose a white ball(1)
//. 2. choose the black(1) out of n and then choose 1 W ball out of (1W + nB) balls.

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double n;
        cin >> n;
        printf("%.8f\n" , (n-1)/n + 1/(n*(n+1)));
    }
    return 0;
}