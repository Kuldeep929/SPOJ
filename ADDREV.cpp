#include<iostream>
using namespace std;

int reverse(int num){
    int rev=0,rem;
    while(num !=0){
        rem = num%10;
        num = num/10;
        rev  = rev *10 + rem; 
    }
    return rev;
}

int main(){
    int n,rev1,rev2,revSum;
    cin >> n;
    int array[n][2];
    for(int i=0;i<n;i++){
        std :: cin>> array[i][0] >> array[i][1];

    }
    for(int k=0;k<n;k++){
         rev1 = reverse(array[k][0]);
         rev2 = reverse(array[k][1]);
         revSum = reverse(rev1+rev2);
         cout << revSum << endl;
    }

    
    return 0;

}