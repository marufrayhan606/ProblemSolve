#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string pos;
    cin >> pos;

    if (pos.find("0000000") < pos.size() || pos.find("1111111") < pos.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}