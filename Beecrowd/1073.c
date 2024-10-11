// 1073 - Even Square
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N % 2 == 0)
    {
        for (int i = 2; i <= N; i += 2)
        {

            printf("%d^2 = %d\n", i, i * i);
        }
    }
    else
    {
        for (int i = 1; i <= N; i += 2)
        {
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}