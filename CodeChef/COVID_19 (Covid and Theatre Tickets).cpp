#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        cout << ceil(N / 2.0) * ceil(M / 2.0) << endl;
    }

    return 0;
}