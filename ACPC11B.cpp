#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n1 = 0, n2 = 0;
        cin >> n1;
        int m1[n1];
        for (int i = 0; i < n1; i++)
            cin >> m1[i];

        cin >> n2;
        int m2[n2];
        for (int i = 0; i < n2; i++)
            cin >> m2[i];

        sort(m1, m1 + n1);
        sort(m2, m2 + n2);

        int a = 0, b = 0;
        int min = fabs((m1[0] - m2[0]));
        while (a < n1 && b < n2)
        {
            if (fabs(m1[a] - m2[b]) < min)
                min = fabs(m1[a] - m2[b]);

            if (m1[a] < m2[b])
                a++;
            else
                b++;
        }
        cout << min << endl;
    }

    return 0;
}