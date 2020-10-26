// count the number of trailing zeroes in a factorial.

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int sum=0;
        while(n){
            n = n/5;
            sum = sum + n;
        }
    cout << sum << endl;
    }
    return 0;
}