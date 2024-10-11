// 1318 - Fake Tickets
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    while (cin >> N >> M && N != 0 && M != 0)
    {

        int arr[M], checker = arr[0], counter = 0, counter2 = 0;

        for (int i = 0; i < M; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + M);

        for (int i = 0; i < M; i++)
        {
            if (arr[i] == checker)
            {
                counter++;
            }
            else
            {
                if (counter > 1)
                {
                    counter2++;
                }
                checker = arr[i];
                counter = 1;
            }
        }

        if (counter > 1)
        {
            counter2++;
        }

        cout << counter2 << endl;
    }
}