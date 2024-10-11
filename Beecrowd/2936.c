// 2936 - How Much Cassava?
#include <stdio.h>

int main()
{
    int x[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    sum = x[0] * 300 + x[1] * 1500 + x[2] * 600 + x[3] * 1000 + x[4] * 150 + 225;

    printf("%d\n", sum);

    return 0;
}
