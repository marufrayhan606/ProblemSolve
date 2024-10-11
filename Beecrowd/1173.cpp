// 1173 - Array fill I
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v;
    cin >> v;

    int N[10];
    N[0] = v;
    cout << "N[0] = " << N[0] << endl;

    for (int i = 1; i < 10; i++)
    {
        N[i] = N[i - 1] * 2;

        cout << "N[" << i << "] = " << N[i] << endl;
    }
}