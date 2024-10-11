// 1099 - Sum of Consecutive Odd Numbers II
#include <stdio.h>
int main()
{
    int N, x, y;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        int sum = 0;
        if (x < y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        else if (x > y)
        {
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        else if (x == y)
        {
            sum = 0;
        }

        printf("%d\n", sum);
    }

    return 0;
}
