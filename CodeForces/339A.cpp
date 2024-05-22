#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int i = 1, m = 1;
    int arr[s.length()];
    arr[0] = s[0] - '0';
    while (s[i] != '\0')
    {
        if (s[i] == '+')
        {
            arr[m] = s[i + 1] - '0';
            m++;
        }
        i++;
    }

    sort(arr, arr + m);

    cout << arr[0];
    for (int i = 1; i < m; i++)
    {
        cout << "+" << arr[i];
    }

    return 0;
}