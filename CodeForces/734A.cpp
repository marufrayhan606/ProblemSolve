#include <iostream>
using namespace std;

int main()
{
    int ch, anton = 0, danik = 0;
    cin >> ch;

    string s;
    cin >> s;

    for (int i = 0; i < ch; i++)
    {
        if (s[i] == 'D')
        {
            danik++;
        }
        else if (s[i] == 'A')
        {
            anton++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (danik > anton)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}