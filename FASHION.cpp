// max product sum

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t =0;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int men[n],women[n];
        for(int i=0;i<n;i++){
            cin >> men[i];
        }
        for(int i=0;i<n;i++){
            cin >> women[i];
        }
        
        

        sort(men,men+n);
        sort(women,women+n);
        int sum=0;

        for(int i =0;i<n;i++){
            sum = sum + (men[i]*women[i]);
        }
        cout<< sum << endl;

    }

    return 0;
}