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

        sort(arr, arr + n, greater<int>());

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= i + 1)
            {
                count = i + 1;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
        
    }
    

    return 0;
}