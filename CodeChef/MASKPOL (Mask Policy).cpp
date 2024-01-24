#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, A;
        cin >> N >> A;

        if (A <= N - A)
        {
            cout << A << endl;
        }
        else if (A > N - A)
        {
            cout << N - A << endl;
        }
    }

    return 0;
}