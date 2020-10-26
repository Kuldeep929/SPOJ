// reversing a binary representation
#include<iostream>
using namespace std;

int reverse(int number){
    int rev =0;
    while(number>0){
        rev = rev << 1;
        rev = rev|(number &1);
        number = number >>1;
    }
    return rev;
}
int main(){
int n ;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
for(int k=0;k<n;k++){

	if(arr[k]%2==0) cout << reverse(arr[k])<<endl;
    else cout << arr[k] << endl;
}


    return 0;
}