#include <iostream>
using namespace std;

int main()
{
    int test, count = 0;
    cin >> test;

    while (test--)
    {
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;

        int sure = 0;

        sure = Petya + Vasya + Tonya;

        if (sure >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}