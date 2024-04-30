#include <iostream>
using namespace std;

string lowerCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    return s;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    s1 = lowerCase(s1);
    s2 = lowerCase(s2);

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] < s2[i])
        {
            cout << -1 << endl;
            return 0;
        }
        else if (s1[i] > s2[i])
        {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}