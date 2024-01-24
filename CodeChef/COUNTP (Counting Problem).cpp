#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        int S[n];
        for (int i = 0; i < n; i++)
        {
            cin >> S[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (S[i] % 2 != 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            cout << "NO" << endl;
        }
        else if (count % 2 == 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}