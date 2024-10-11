#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long m, n, a;
    cin >> m >> n >> a;

    long long x, y;
    x = ceil((m / (double)a));
    y = ceil((n / (double)a));

    cout << x * y;

    return 0;
}
