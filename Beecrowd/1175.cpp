// 1175 - Array change I
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[20];

    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = arr[i];
        arr[i] = arr[19 - i];
        arr[19 - i] = temp;
    }

    for (int j = 0; j < 20; j++)
    {
        cout << "N[" << j << "] = " << arr[j] << endl;
    }
}