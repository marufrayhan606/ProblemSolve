#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int max = a;
    (b >= max) ? max = b : max;
    (c >= max) ? max = c : max;
    (d >= max) ? max = d : max;

    if (max > a)
    {
        cout << max - a << endl;
    }
    if (max > b)
    {
        cout << max - b << endl;
    }
    if (max > c)
    {
        cout << max - c << endl;
    }
    if (max > d)
    {
        cout << max - d << endl;
    }
}