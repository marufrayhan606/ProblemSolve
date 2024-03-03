#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] >= array[k - 1] && array[i] > 0)
        {
            count++;
        }
    }

    cout << count << endl;
}