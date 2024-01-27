#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B, X;
        cin >> A >> B >> X;

        if (A == B)
        {
            cout << "Yes" << endl;
        }
        else if (abs(A - B) % (2 * X) == 0)
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
