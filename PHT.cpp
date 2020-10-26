#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin >> n;
        cout << "Case "<< i+1 <<": " << floor((sqrt(1 + n))-1) << endl;
    }

    return 0;
}