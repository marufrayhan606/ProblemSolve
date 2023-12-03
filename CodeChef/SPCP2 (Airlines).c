#include <stdio.h>

int main()
{
    int n, x, y;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        if (y % 100 == 0)
        {
            if (y / 100 < x)
            {
                printf("0\n");
            }
            else
            {
                printf("%d\n", (y / 100) - x);
            }
        }
        else
        {
            if (y / 100 < x)
            {
                printf("0\n");
            }
            else
            {
                printf("%d\n", (y / 100) - x + 1);
            }
        }
    }

    return 0;
}