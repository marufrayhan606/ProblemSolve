#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;

        if (A > B && A > C && A > 50)
        {
            cout << "A" << endl;
        }
        else if (B > A && B > C && B > 50)
        {
            cout << "B" << endl;
        }
        else if (C > B && C > A && C > 50)
        {
            cout << "C" << endl;
        }
        else if (A == B && C - A > 50)
        {
            cout << "C" << endl;
        }
        else if (B == C && A - B > 50)
        {
            cout << "A" << endl;
        }
        else if (A == C && B - A > 50)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "NOTA" << endl;
        }
    }

    return 0;
}
