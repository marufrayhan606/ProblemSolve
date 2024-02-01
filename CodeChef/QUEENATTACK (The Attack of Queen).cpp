#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X, Y, sum;
        cin >> N >> X >> Y;

        sum = (2 * N - 2);
        sum += min(X - 1, Y - 1);
        sum += min(X - 1, N - Y);
        sum += min(N - X, N - Y);
        sum += min(N - X, Y - 1);
        cout << sum << endl;
    }

    return 0;
}