#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int matched, max = 0;
        for (int i = 0; i < N; i++)
        {
            matched = 1;
            for (int j = i + 1; j < N; j++)
            {
                if (arr[i] == arr[j])
                {
                    matched++;
                }
            }

            if (max < matched)
            {
                max = matched;
            }
        }

        cout << N - max << endl;
    }

    return 0;
}
