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
        int arr[N], sum = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum % 2 == 0)
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
