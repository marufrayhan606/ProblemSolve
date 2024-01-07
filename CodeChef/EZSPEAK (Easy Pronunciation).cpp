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
        char S[n + 1];

        cin >> S;

        int serial = 0;

        for (int j = 0; j < n; j++)
        {
            if (S[j] == 'a' || S[j] == 'e' || S[j] == 'i' || S[j] == 'o' || S[j] == 'u')
            {
                serial = 0;
            }
            else
            {
                serial++;
                if (serial == 4)
                {
                    break;
                }
            }
        }
        if (serial > 3)
        {
            cout << "No" << endl;
        }
        else if (serial <= 3)
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
