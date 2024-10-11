// 1181 - Line in Array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L;
    char T;
    double M[12][12], sum = 0;

    cin >> L >> T;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    for (int i = 0; i < 12; i++)
    {
        sum += M[L][i];
    }

    if (T == 'M')
    {
        cout << fixed << setprecision(1) << sum / 12 << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
}