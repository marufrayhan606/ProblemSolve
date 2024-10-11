// 1114 - Fixed Password
#include <stdio.h>
int main()
{
    int N;

    for (;;)
    {
        scanf("%d", &N);

        if (N != 2002)
        {
            printf("Senha Invalida\n");
        }
        else if (N == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
    }

    return 0;
}
