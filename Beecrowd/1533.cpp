#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (cin >> n && n != 0)
    {
        int arr[n], copy[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            copy[i] = arr[i];
        }
        
        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            if (copy[i] == arr[n - 2])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}