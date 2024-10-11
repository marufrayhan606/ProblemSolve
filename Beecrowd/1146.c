// 1146 - Growing Sequences
#include <stdio.h>

int main()
{
    int X;

    for (int i = 0;; i++)
    {
        scanf("%d", &X);

        if (X != 0)
        {
            for (int i = 1; i < X; i++)
            {
                printf("%d ", i);
            }
            printf("%d\n", X);
        }
        else
        {
            break;
        }
    }

    return 0;
}