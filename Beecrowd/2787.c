// 2787 - Chess
#include <stdio.h>
int main()
{
    int L, C;

    scanf("%d %d", &L, &C);

    if (L % 2 != 0 && C % 2 != 0)
    {
        printf("1\n");
    }
    else if (L % 2 != 0 && C % 2 == 0)
    {
        printf("0\n");
    }
    else if (L % 2 == 0 && C % 2 != 0)
    {
        printf("0\n");
    }
    else if (L % 2 == 0 && C % 2 == 0)
    {
        printf("1\n");
    }

    return 0;
}