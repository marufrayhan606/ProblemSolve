// 1079 - Weighted Averages
#include <stdio.h>
int main()
{
    int N;
    double x, y, z;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%lf %lf %lf", &x, &y, &z);
        printf("%.1lf\n", ((x * 2) + (y * 3) + (z * 5)) / (2 + 3 + 5));
    }

    return 0;
}
