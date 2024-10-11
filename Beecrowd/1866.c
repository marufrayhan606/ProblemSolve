// 1866 - Bill
#include <stdio.h>
int main()
{
    int C;
    scanf("%d", &C);
    int num[C];

    for (int i = 0; i < C; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }

    return 0;
}