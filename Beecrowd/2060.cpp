// 2060 - Bino's Challenge
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n[t], multiple2 = 0, multiple3 = 0, multiple4 = 0, multiple5 = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> n[i];

        if (n[i] % 2 == 0)
        {
            multiple2++;
        }
        if (n[i] % 3 == 0)
        {
            multiple3++;
        }
        if (n[i] % 4 == 0)
        {
            multiple4++;
        }
        if (n[i] % 5 == 0)
        {
            multiple5++;
        }
    }

    cout << multiple2 << " Multiplo(s) de 2" << endl;
    cout << multiple3 << " Multiplo(s) de 3" << endl;
    cout << multiple4 << " Multiplo(s) de 4" << endl;
    cout << multiple5 << " Multiplo(s) de 5" << endl;
}