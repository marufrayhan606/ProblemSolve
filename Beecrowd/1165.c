// 1165 - Prime Number
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int PrimeChecker = 0;
        for (int div = 2; div < num[i]; div++)
        {

            if (num[i] % div == 0)
            {
                PrimeChecker = 1;
                break;
            }
        }
        if (PrimeChecker == 1)
        {
            printf("%d nao eh primo\n", num[i]);
        }
        else
        {
            printf("%d eh primo\n", num[i]);
        }
    }

    return 0;
}
