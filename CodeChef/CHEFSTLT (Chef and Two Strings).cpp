#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int matched = 0, unmatched = 0, x;
        string s1, s2;
        cin >> s1;
        cin >> s2;

        for (int i = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] == '?' || s2[i] == '?')
            {
                matched++;
                unmatched++;
            }
            else if (s1[i] != s2[i])
            {
                unmatched++;
            }
            else if (s1[i] == s2[i])
            {
                matched++;
            }
            x = i + 1;
        }

        cout << x - matched << " " << unmatched << endl;
    }

    return 0;
}
