#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;
        bool sameElement = false;
        int time = 0, i;

        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == t[i])
            {
                time++;
                sameElement = true;
            }
            else
            {
                break;
            }
        }

        if (sameElement)
        {
            time++;
            time += s.size() - i;
            time += t.size() - i;
        }
        else
        {
            time += s.size() + t.size();
        }

        cout << time << endl;
    }
    
    return 0;
}