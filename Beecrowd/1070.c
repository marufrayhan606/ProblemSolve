// 1070 - Six Odd Numbers
#include <stdio.h>

int main()
{
    int X, j = 0;
    scanf("%d", &X);

    if (X % 2 == 0)
    {
        for (int i = X + 1; j < 6; i += 2, j++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (int i = X; j < 6; i += 2, j++)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}