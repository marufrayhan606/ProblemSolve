#include <iostream>
using namespace std;

int main()
{
    string username;
    cin >> username;

    // Counting distinct characters
    int count = 0;
    for (int i = 0; i < username.length(); i++)
    {
        bool isDistinct = true;
        for (int j = 0; j < i; j++)
        {
            if (username[i] == username[j])
            {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}