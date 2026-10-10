#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int a = 1; a <= n; a++)
    {
        int sum1 = 0;

        for(int i = 1; i < a; i++)
        {
            if(a % i == 0)
                sum1 += i;
        }

        int b = sum1, sum2 = 0;

        for(int i = 1; i < b; i++)
        {
            if(b % i == 0)
                sum2 += i;
        }

        if(sum2 == a && a < b && b <= n)
            cout << a << " " << b << endl;
    }

    return 0;
}
