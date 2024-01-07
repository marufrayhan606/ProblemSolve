#include <bits/stdc++.h>
using namespace std;

void func()
{

    int N;
    cin >> N;

    int arr[2 * N];

    for (int i = 0; i < 2 * N; i++)
    {
        cin >> arr[i];
    }

    int checker;

    for (int m = 0; m < 2 * N; m++)
    {
        checker = 1;

        for (int n = m + 1; n < (2 * N); n++)
        {
            if (arr[m] == arr[n])
            {
                checker++;

                if (checker > 2)
                {
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }

    cout << "Yes" << endl;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        func();
    }

    return 0;
}
