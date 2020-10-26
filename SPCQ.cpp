// harshad numbers or nivel numbers.
    #include <iostream>
    using namespace std;

    int sumOfDigits(long long int num)
    {
        long long int sum = 0;
        while (num != 0)
        {
            sum = sum + num % 10;
            num = num / 10;
        }
        return sum;
    }

    int main()
    {
        long long int t;
        cin >> t;
        while (t--)
        {
            long long int n;
            cin >> n;
            while (n % sumOfDigits(n) != 0)
                n++;
            cout << n << endl;
        }
        return 0;
    }