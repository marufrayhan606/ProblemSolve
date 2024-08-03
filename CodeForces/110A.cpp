#include <iostream>
using namespace std;

int main()
{
    long long num;
    int temp, lucky = 0;
    cin >> num;
    while (num != 0)
    {
        temp = num % 10;
        num /= 10;

        if (temp == 4 || temp == 7)
        {
            lucky++;
        }
    }
    if (lucky == 4 || lucky == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}