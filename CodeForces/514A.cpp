#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    for(auto &digit: x)
    {
        if(digit >= '5' && digit != '9')
        {
            digit = '9' - digit + '0';
        }
        else if(digit == '9')
        {
            digit = '0';
        }
    }

    if(x[0] == '0')
    {
        x[0] = '9';
    }

    cout << x << endl;

    return 0;
}