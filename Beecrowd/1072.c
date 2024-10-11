// 1072 - Interval 2
#include <stdio.h>

int main()
{
    int N, X, count = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X);
        if (X >= 10 && X <= 20)
        {
            count++;
        }
    }
    printf("%d in\n", count);
    printf("%d out\n", N - count);

    return 0;
}