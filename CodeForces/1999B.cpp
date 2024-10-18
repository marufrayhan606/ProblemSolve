#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2, suneetScore = 0;
        cin >> a1 >> a2 >> b1 >> b2;

        if (a1 > b1 && a2 > b2)
        {
            suneetScore++;
        }
        else if(a1 > b1 && a2 == b2)
        {
            suneetScore++;
        }
        else if(a1 == b1 && a2 > b2)
        {
            suneetScore++;
        }

        if (a1 > b2 && a2 > b1)
        {
            suneetScore++;
        }
        else if(a1 > b2 && a2 == b1)
        {
            suneetScore++;
        }
        else if(a1 == b2 && a2 > b1)
        {
            suneetScore++;
        }

        if (a2 > b1 && a1 > b2)
        {
            suneetScore++;
        }
        else if(a2 > b1 && a1 == b2)
        {
            suneetScore++;
        }
        else if(a2 == b1 && a1 > b2)
        {
            suneetScore++;
        }

        if (a2 > b2 && a1 > b1)
        {
            suneetScore++;
        }
        else if(a2 > b2 && a1 == b1)
        {
            suneetScore++;
        }
        else if(a2 == b2 && a1 > b1)
        {
            suneetScore++;
        }

        cout << suneetScore << endl;
    }

    return 0;
}