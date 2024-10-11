// 1047 - Game Time with Minutes
#include <stdio.h>

int main()
{
    int iniHour, iniMin, finHour, finMin;
    scanf("%d %d %d %d", &iniHour, &iniMin, &finHour, &finMin);

    if (iniHour < finHour && iniMin <= finMin)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", finHour - iniHour, finMin - iniMin);
    }
    else if (iniHour == finHour && iniMin == finMin)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if (iniHour == finHour && iniMin < finMin)
    {
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", finMin - iniMin);
    }
    else if (iniHour > finHour && iniMin > finMin)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (24 - (iniHour - finHour)) - 1, 60 - (iniMin - finMin));
    }
    else if (iniHour > finHour && iniMin <= finMin)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24 - (iniHour - finHour), finMin - iniMin);
    }
    else if (iniHour == finHour && iniMin > finMin)
    {
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", 60 - (iniMin - finMin));
    }
    else if (iniHour < finHour && iniMin > finMin)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (finHour - iniHour) - 1, 60 - (iniMin - finMin));
    }

    return 0;
}
