// 1176 - Fibonacci Array
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int N[T];
    for (int i = 0; i < T; i++)
    {
        cin >> N[i];
    }

    unsigned long long int fibo[61];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 61; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    for (int j = 0; j < T; j++)
    {
        cout << "Fib(" << N[j] << ") = " << fibo[N[j]] << endl;
    }
}