// pyramid of cards
// sum%1000007
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int k =0;k<n;k++){
        long long sum =0;
        long long num =arr[k];
        sum = ((num*(num+1)) + ((num*(num-1))/2));
        cout<< sum%1000007 << endl;
    }



    return 0;
}