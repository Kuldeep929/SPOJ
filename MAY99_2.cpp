#include<iostream>
#include <string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

char arr[6] = "manku";

void word(long long n){
    char str[1000000];
    int i=0;
    while(n>0){
        int rem = n%5;
        if(rem==0){
            str[i]=arr[4];
            i++;
            n = (n/5)-1;
        }
        else{
            str[i] = arr[(n%5)-1];
            i++;
            n=n/5;
        }
        
    }
    str[i]='\0';
    reverse(str , str + strlen(str));
    cout << str << endl;
    return;

}

int main(){
    int t;cin >> t;
    while(t--){
        long long n; cin >> n;
        word(n);
    }
    return 0;
}