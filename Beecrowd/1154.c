// 1154 - Ages
#include <stdio.h>
int main()
{
    int N, sum = 0, i;

    for (i = 0;; i++)
    {
        scanf("%d", &N);
        if (N < 0)
        {
            break;
        }
        sum += N;
    }

    printf("%0.2lf\n", sum / (double)i);

    return 0;
}
