// 1046 - Game Time

#include <stdio.h>
int main()
{

    int start, end, dur;
    scanf("%d %d", &start, &end);

    if (start > end)
    {
        printf("O JOGO DUROU %d HORA(S)\n", (24 - start) + end);
    }
    else if (end > start)
    {
        printf("O JOGO DUROU %d HORA(S)\n", end - start);
    }
    else
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}