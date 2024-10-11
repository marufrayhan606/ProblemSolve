// 1182 - Column in Array
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    int n;
    cin >> n;

    char T;
    cin >> T;

    float arr[12][12];

    // Taking input
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
        sum += arr[i][n];
    }

    if (T == 'S')
    {
        cout << sum << endl;
    }
    else if (T == 'M')
    {
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    }

    return 0;
}