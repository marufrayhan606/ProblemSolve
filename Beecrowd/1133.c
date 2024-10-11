// 1133 - Rest of a Division
#include <stdio.h>

int main()
{
    int X, Y, start, end;
    scanf("%d %d", &X, &Y);

    if (X >= 0 && Y >= 0)
    {
        if (X > Y)
        {
            start = Y;
            end = X;
        }
        else if (Y > X)
        {
            start = X;
            end = Y;
        }
        for (int i = start + 1; i < end; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}