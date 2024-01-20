#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string A, B;
        cin >> A >> B;

        int A0 = 0, A1 = 0, B0 = 0, B1 = 0;

        for (int i = 0; i < N; i++)
        {
            if (A[i] == '1')
            {
                A1++;
            }
            else
            {
                A0++;
            }

            if (B[i] == '1')
            {
                B1++;
            }
            else
            {
                B0++;
            }
        }

        if (A0 == B0 && A1 == B1)
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
