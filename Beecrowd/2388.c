// 2388 - Tacógrafo
#include <stdio.h>

int main()
{
    int n, x, y, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        sum += x * y;
    }
    printf("%d\n", sum);
    return 0;
}
