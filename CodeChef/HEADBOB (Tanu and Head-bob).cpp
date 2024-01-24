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

        char S[n];
        for (int i = 0; i < n; i++)
        {
            cin >> S[i];
        }

        int countN = 0, countY = 0, countI = 0;

        for (int i = 0; i < n; i++)
        {
            if (S[i] == 'N')
            {
                countN++;
            }
            else if (S[i] == 'Y')
            {
                countY++;
            }
            else if (S[i] == 'I')
            {
                countI++;
            }
        }
        if (countY > 0)
        {
            cout << "NOT INDIAN" << endl;
        }
        else if (countI > 0)
        {
            cout << "INDIAN" << endl;
        }
        else if (countN > 0)
        {
            cout << "NOT SURE" << endl;
        }
        else if (countN == 0 && countY == 0 && countI == 0)
        {
            cout << "NOT SURE" << endl;
        }
    }

    return 0;
}