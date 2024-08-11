#include <iostream>
using namespace std;

int main()
{
    int n, totalPassengers = 0, max = 0;
    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        totalPassengers -= a;
        totalPassengers += b;

        if (totalPassengers > max)
        {
            max = totalPassengers;
        }
    }
    cout << max << endl;

    return 0;
}