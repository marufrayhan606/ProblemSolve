// 2863 - Umil Bolt
#include <stdio.h>
#define EOF (-1)

int main()
{
    int T, i;

    for (; scanf("%d", &T) != EOF;)
    {

        float Ti[T], fastest;

        if (T >= 2 && T <= 99)
        {
            for (i = 0; i < T; i++)
            {
                scanf("%f", &Ti[i]);
            }

            fastest = Ti[0];

            for (i = 1; i < T; i++)
            {
                if (Ti[i] >= 9 && Ti[i] <= 11)
                {
                    if (Ti[i] < fastest)
                    {
                        fastest = Ti[i];
                    }
                    else if (Ti[i] > fastest)
                    {
                    }
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            break;
        }
        printf("%.2f\n", fastest);
    }

    return 0;
}