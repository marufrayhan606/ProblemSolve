#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count += a[i];
    }
    if (count > 0)
        cout << "HARD" << endl;
    else
    {
        cout << "EASY" << endl;
    }

    return 0;
}