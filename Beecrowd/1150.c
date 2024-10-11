// 1150 - Exceeding Z
#include <stdio.h>
int main()
{
    int X, Y, sum = 0, counter = 0;
    scanf("%d", &X);

    for (;;)
    {
        scanf("%d", &Y);
        if (Y > X)
        {
            break;
        }
    }

    for (int i = X;; i++)
    {
        sum += i;
        counter++;
        if (sum > Y)
        {
            printf("%d\n", counter);
            break;
        }
    }

    return 0;
}