// 1064 - Positives and Average
#include <stdio.h>
int main()
{
    int i = 0;
    float a, b, c, d, e, f, sum = 0;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    if (a > 0)
    {
        i++;
        sum = sum + a;
    }
    if (b > 0)
    {
        i++;
        sum = sum + b;
    }
    if (c > 0)
    {
        i++;
        sum = sum + c;
    }
    if (d > 0)
    {
        i++;
        sum = sum + d;
    }
    if (e > 0)
    {
        i++;
        sum = sum + e;
    }
    if (f > 0)
    {
        i++;
        sum = sum + f;
    }

    printf("%d valores positivos\n", i);
    printf("%.1f\n", sum / i);

    return 0;
}