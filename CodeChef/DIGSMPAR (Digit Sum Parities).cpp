#include <bits/stdc++.h>
using namespace std;

int digitSum(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int n;
        cin >> n;

        if (digitSum(n) % 2 == 0)
        {
            while (digitSum(n) % 2 == 0)
            {
                n++;
            }

            cout << n << endl;
        }
        else
        {
            while (digitSum(n) % 2 != 0)
            {
                n++;
            }

            cout << n << endl;
        }
    }

    return 0;
}