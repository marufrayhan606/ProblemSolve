#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int count = 0, temp = n;

        while (temp != 0)
        {
            if (temp % 10 == 0)
            {
                temp = temp / 10;
            }
            else
            {
                count++;
                temp = temp / 10;
            }
        }

        int rem[count], multiplier = 1;
        cout << count << endl;

        while (n != 0)
        {
            if (n % 10 == 0)
            {
                n = n / 10;
                multiplier *= 10;
            }
            else
            {
                cout << (n % 10) * multiplier << " ";
                n = n / 10;
                multiplier *= 10;
            }
        }
        cout << endl;
    }
}