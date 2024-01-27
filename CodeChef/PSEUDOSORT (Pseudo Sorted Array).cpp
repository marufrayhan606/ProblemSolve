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

        for (int i = 0; i < n - 1; i++)
        {
            if (S[i] > S[i + 1])
            {
                int temp = S[i];
                S[i] = S[i + 1];
                S[i + 1] = temp;
                break;
            }
        }

        int check = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (S[i] <= S[i + 1])
            {
                check *= 1;
            }

            else
            {
                check *= 0;
            }
        }

        if (check == 1)
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