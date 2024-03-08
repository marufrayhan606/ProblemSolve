#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int a[n], pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] >= 0)
                pos += a[i];
            else if (a[i] < 0)
                neg += a[i];
        }
        cout << pos + abs(neg) << endl;
    }
}