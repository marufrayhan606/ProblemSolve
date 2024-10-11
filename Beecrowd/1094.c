// 1094 - Experiments
#include <stdio.h>

int main()
{
    int N, total = 0, coelho = 0, rato = 0, sapo = 0;
    char ch;
    scanf("%d", &N);
    int num[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %c", &num[i], &ch);

        total += num[i];

        if (ch == 'C')
        {
            coelho += num[i];
        }
        else if (ch == 'R')
        {
            rato += num[i];
        }
        else if (ch == 'S')
        {
            sapo += num[i];
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2lf %\n", (coelho / (double)total) * 100);
    printf("Percentual de ratos: %.2lf %\n", (rato / (double)total) * 100);
    printf("Percentual de sapos: %.2lf %\n", (sapo / (double)total) * 100);

    return 0;
}
