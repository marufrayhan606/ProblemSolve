// 2167 - Engine Failure
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int speed[T], pos = 0;

    for (int i = 0; i < T; i++)
    {
        cin >> speed[i];
    }

    for (int i = 0; i < T - 1; i++)
    {
        if (speed[i] <= speed[i + 1])
        {
            pos = 0;
        }
        else
        {
            pos = i + 2;
            break;
        }
    }

    cout << pos << endl;
}