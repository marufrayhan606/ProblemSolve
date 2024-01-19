#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int list[n];
        for (int i = 0; i < n; i++)
        {
            cin >> list[i];
        }

        int a, b;
        for (int i = 0; i < n; i++)
        {
            if (list[i] == 1)
            {
                a = i + 1;
            }
            else if (list[i] == n)
            {
                b = i + 1;
            }
        }

        if (a > b)
        {
            cout << (a - 1) + (n - b) - 1 << endl;
        }
        else
        {
            cout << (a - 1) + (n - b) << endl;
        }
    }

    return 0;
}
