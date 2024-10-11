// 1060 - Positive Numbers
#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, n5, n6;
    int i = 0;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    scanf("%f", &n6);

    if (n1 > 0)
    {
        i++;
    }
    if (n2 > 0)
    {
        i++;
    }
    if (n3 > 0)
    {
        i++;
    }
    if (n4 > 0)
    {
        i++;
    }
    if (n5 > 0)
    {
        i++;
    }
    if (n6 > 0)
    {
        i++;
    }

    printf("%d valores positivos\n", i);

    return 0;
}