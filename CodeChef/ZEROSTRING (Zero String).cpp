#include <bits/stdc++.h>
using namespace std;

int find(int N, char Arr[]);
int reverse(int N, char Arr[]);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        char Arr[N];

        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }

        int x = find(N, Arr);
        int y = reverse(N, Arr) + 1;
        if (x > y)
        {
            cout << y << endl;
        }
        else
        {
            cout << x << endl;
        }
    }

    return 0;
}

int find(int N, char Arr[])
{
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        if (Arr[i] == '1')
        {
            counter++;
        }
    }
    return counter;
}

int reverse(int N, char Arr[])
{
    for (int i = 0; i < N; i++)
    {
        if (Arr[i] == '1')
        {
            Arr[i] = '0';
        }
        else
        {
            Arr[i] = '1';
        }
    }

    return find(N, Arr);
}