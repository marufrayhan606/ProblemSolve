#include <iostream>
using namespace std;

int main()
{
    int n, digits;
    cin >> n;

    bool distinct = false;
    while (!distinct)
    {
        distinct = true;
        n++;
        int temp = n;
        int arr[10] = {0};

        while (temp > 0)
        {
            digits = temp % 10;
            arr[digits]++;
            temp = temp / 10;
        }

        for (int i = 0; i < 10; i++)
        {
            if (arr[i] > 1)
            {
                distinct = false;
                break;
            }
        }
    }

    cout << n << endl;
    return 0;
}
