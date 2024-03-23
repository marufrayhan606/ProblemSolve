#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int arr[t];
    long double sum = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << setprecision(14) << sum / t << endl;
}