#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long n;
        cin >> n;

        long x, y;

        if (n % 2 == 1)
        {
            x = n / 2;
            y = n / 2 + 1;
        }
        else
        {
            x = n / 2;
            y = n / 2;
        }

        cout << 2 * x * y << endl;
    }

    return 0;
}
