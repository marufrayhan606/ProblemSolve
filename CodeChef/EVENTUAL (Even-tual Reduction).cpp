#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int x;
        cin >> x;
        char s[x];
        bool Yes = true;
        for (int i = 0; i < x; i++)
        {
            cin >> s[i];
        }

        for (int i = 0; i < x; i++)
        {
            int counter = 0;

            for (int j = 0; j < x; j++)
            {
                if (s[i] == s[j])
                {
                    counter++;
                }
            }

            if (counter % 2 != 0)
            {
                Yes = false;
                break;
            }

            counter = 1;
        }

        if (Yes == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
