// 2344 - Notas da Prova
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N >= 0 && N <= 100)
    {
        if (N == 0)
        {
            printf("E\n");
        }
        else if (N >= 1 && N <= 35)
        {
            printf("D\n");
        }
        else if (N >= 36 && N <= 60)
        {
            printf("C\n");
        }
        else if (N >= 61 && N <= 85)
        {
            printf("B\n");
        }
        else if (N >= 86 && N <= 100)
        {
            printf("A\n");
        }
    }

    return 0;
}