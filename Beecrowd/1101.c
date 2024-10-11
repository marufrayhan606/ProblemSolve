// 1101 - Sequence of Numbers and Sum
#include <stdio.h>

int main()
{
    int M, N, sum = 0;

    for (int i = 0;; i++)
    {
        scanf("%d %d", &M, &N);
        if (M <= 0 || N <= 0)
        {
            break;
        }
        else if (M > N)
        {
            for (int i = N; i <= M; i++)
            {
                sum += i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", sum);
            sum = 0;
        }
        else if (M < N)
        {
            for (int i = M; i <= N; i++)
            {
                sum += i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", sum);
            sum = 0;
        }
    }

    return 0;
}