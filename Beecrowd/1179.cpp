// 1179 - Array Fill IV
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Num[15], par[5], impar[5], x = 0, y = 0;

    for (int i = 0; i < 15; i++)
    {
        cin >> Num[i];
    }

    for (int i = 0; i < 15; i++)
    {
        if (Num[i] % 2 == 0)
        {
            if (x < 5)
            {
                par[x] = Num[i];
                x++;
            }
            else
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                x = 0;
                par[x] = Num[i];
                x++;
            }
        }
        else
        {
            if (y < 5)
            {
                impar[y] = Num[i];
                y++;
            }
            else
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                y = 0;
                impar[y] = Num[i];
                y++;
            }
        }
    }

    for (int i = 0; i < y; i++)
    {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    for (int i = 0; i < x; i++)
    {
        cout << "par[" << i << "] = " << par[i] << endl;
    }
}