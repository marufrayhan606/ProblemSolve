#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        int sum = 0;
        for (int p = 0; p < n; p++)
        {

            if (a[p] >= x)
            {
                sum += b[p];
            }
        }
        cout << sum << endl;
    }
    return 0;
}
