#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int D1, D2, D3, S1, S2, S3, D, S;
        cin >> D1 >> D2 >> D3;
        cin >> S1 >> S2 >> S3;
        D = D1 + D2 + D3;
        S = S1 + S2 + S3;
        if (D > S)
        {
            cout << "DRAGON" << endl;
        }
        else if (S > D)
        {
            cout << "SLOTH" << endl;
        }
        else
        {
            if (D1 > S1)
            {
                cout << "DRAGON" << endl;
            }
            else if (S1 > D1)
            {
                cout << "SLOTH" << endl;
            }
            else
            {
                if (D2 > S2)
                {
                    cout << "DRAGON" << endl;
                }
                else if (S2 > D2)
                {
                    cout << "SLOTH" << endl;
                }
                else
                {
                    cout << "TIE" << endl;
                }
            }
        }
    }

    return 0;
}
