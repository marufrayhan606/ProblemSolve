#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;

    while (cin >> N >> Q)
    {
        vector <int> n(N);

        for (int i = 0; i < N; i++)
        {
            cin >> n[i];
        }

        sort(n.begin(), n.end(), greater<int>());

        int q;
        for (int i = 0; i < Q; i++)
        {
            cin >> q;
            cout << n[q - 1] << endl;
        }
        
    }

    return 0;
}