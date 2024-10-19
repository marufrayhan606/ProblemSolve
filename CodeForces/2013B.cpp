#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long temp = arr[n - 2];

        for (int i = n - 3; i >= 0; i--)
        {
            temp -= arr[i];
        }

        cout << arr[n - 1] - temp << endl;
        
    }
    

    return 0;
}