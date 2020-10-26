// Old school method for determining the factorial which are upto 200 digits.

#include <iostream>
using namespace std;
#define MAX 200

int fact[MAX];

int multiply(int x, int size)
{
    int carry = 0;
    for (int i = 0; i < size; i++)
    {
        int product = fact[i] * x + carry;
        fact[i] = product % 10;
        carry = product / 10;
    }
    while(carry){
        fact[size]=carry%10;
        carry/=10;
        size++; 
    }
    return size;
}

void factorial(int num)
{
    fact[0] = 1;
    int size = 1;

    for (int i = 2; i <= num; i++)
        size = multiply(i, size);
    

    for (int i = size - 1; i >= 0; i--)
        cout << fact[i];
    
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        factorial(n);
    }

    return 0;
}
