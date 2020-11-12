// just observe from the sum of elements
#include<iostream>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        int n;cin >>n;
        int arr[n];
        long long int sum;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum%n==0)
            cout << n << endl;
        else
            cout << n-1 << endl;
    }
    return 0;
}