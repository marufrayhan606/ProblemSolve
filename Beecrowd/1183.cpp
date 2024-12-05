#include <bits/stdc++.h>
using namespace std;

int main()
{
    float arr[12][12];
    char operation;
    cin >> operation;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> arr[i][j];
        }
    }

    float sum = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = i; j < 12; j++)
        {
            if (j > i)
            {
                sum += arr[i][j];
            }
        } 
    }

    operation == 'S' ? cout << fixed << setprecision(1) << sum << endl : cout << fixed << setprecision(1) << sum / 66 << endl;
    
    return 0;
}