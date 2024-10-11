// 1177 - Array Fill II
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N[1000];

    int T, x = 0;
    cin >> T;

    for (int i = 0; i < 1000; i++)
    {
        if (x < T)
        {
            N[i] = x;
            x++;
        }
        else
        {
            x = 0;
            N[i] = x;
            x++;
        }

        cout << "N[" << i << "] = " << N[i] << endl;
    }
}