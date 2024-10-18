#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;

        long long jumps = 0, xAxis = 0, yAxis = 0;

        xAxis = ceil(x / (double)k);
        yAxis = ceil(y / (double)k);

        if(yAxis >= xAxis)
        {
            jumps = yAxis * 2;
        }
        else if(xAxis > yAxis)
        {
            jumps = xAxis * 2 - 1;
        }

        cout << jumps << endl;
    }
    
    return 0;
}