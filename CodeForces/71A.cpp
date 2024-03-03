#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;

    while (t--)
    {
        cin >> str;
        if (str.size() > 10)
        {
            cout << str[0] << str.size() - 2 << str[str.size() - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }

    return 0;
}