#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        for (int j = 0; j < N; j++)
        {
            if (A[j] <= K)
            {
                K -= A[j];
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
