// 1080 - Highest and Position
#include <stdio.h>

int main()
{
    int num[100], filter, sl;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &num[i]);
    }

    filter = num[0];
    sl = 1;

    for (int i = 1; i < 100; i++)
    {
        if (num[i] > filter)
        {
            filter = num[i];
            sl = i + 1;
        }
    }
    printf("%d\n", filter);
    printf("%d\n", sl);

    return 0;
}