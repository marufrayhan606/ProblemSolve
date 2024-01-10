#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int A, B, sumA = 0, sumB = 0;
        cin >> A >> B;

        for (int i = 1;; i += 2)
        {
            if (sumA <= A)
            {
                sumA += i;
            }
            else
            {
                break;
            }
        }

        for (int j = 2;; j += 2)
        {
            if (sumB <= B)
            {
                sumB += j;
            }
            else
            {
                break;
            }
        }

        if (sumA > sumB)
        {
            cout << "Limak" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
