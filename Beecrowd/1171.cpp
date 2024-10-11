// 1171 - Number Frequence
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int arr[t];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + t);

    int checker = arr[0], counter = 0;

    for (int i = 0; i < t; i++)
    {
        if (arr[i] == checker)
        {
            counter++;
        }
        else
        {
            cout << checker << " aparece " << counter << " vez(es)" << endl;
            checker = arr[i];
            counter = 1;
        }
    }

    cout << checker << " aparece " << counter << " vez(es)" << endl;
}