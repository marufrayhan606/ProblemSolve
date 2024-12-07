#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M = 12;
    double arr[M][M];
    double sum = 0;

    char operation;
    cin >> operation;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    

    for (int i = 0; i < M - 1; i++)
    {
        for (int j = 0; j < M - 1 - i; j++)
        {
            sum += arr[i][j];
        }
    }

    if (operation == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (operation == 'M')
    {
        cout << fixed << setprecision(1) << sum / 66 << endl;
    }
    
    return 0;
}