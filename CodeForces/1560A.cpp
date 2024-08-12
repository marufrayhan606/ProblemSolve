#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n, count = 0;
        cin >> n;

        for (int i = 1; n != count; i++)
        {
            if ((i % 3 == 0) || (i % 10 == 3))
            {
                continue;
            }

            count++;

            if (count == n)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}