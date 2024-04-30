#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;

        int a[n * n];
        for (int i = 0; i < n * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n * n);

        int b[n * n], order = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[order] = a[0] + c * i + d * j;
                order++;
            }
        }

        sort(b, b + n * n);

        int check = 1;

        for (int i = 0; i < n * n; i++)
        {
            if (a[i] != b[i])
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}