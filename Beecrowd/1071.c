// 1071 - Sum of Consecutive Odd Numbers I
#include <stdio.h>

int main()
{
    int X, Y, sum = 0;
    scanf("%d %d", &X, &Y);

    // When X > Y
    if (X > Y)
    {
        if (Y % 2 == 0)
        {
            for (int i = Y + 1; i < X; i += 2)
            {
                sum += i;
            }
        }
        else
        {
            for (int i = Y + 2; i < X; i += 2)
            {
                sum += i;
            }
        }
    }

    // When X < Y
    else if (Y > X)
    {
        if (X % 2 == 0)
        {
            for (int i = X + 1; i < Y; i += 2)
            {
                sum += i;
            }
        }
        else
        {
            for (int i = X + 2; i < Y; i += 2)
            {
                sum += i;
            }
        }
    }
    printf("%d\n", sum);

    return 0;
}