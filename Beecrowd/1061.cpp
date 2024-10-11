#include <iostream>
using namespace std;

int inSeconds(int day, int hour, int minute, int second)
{
    int total = 0;
    total += day * 24 * 60 * 60;
    total += hour * 60 * 60;
    total += minute * 60;
    total += second;

    return total;
}

int main()
{

    int initialDay, initialHour, initialMinute, initialSecond, finalDay, finalHour, finalMinute, finalSecond, totalInitial, totalFinal, total, day, hour, minute, second;
    scanf("Dia %d", &initialDay);
    scanf("%d : %d : %d\n", &initialHour, &initialMinute, &initialSecond);
    scanf("Dia %d", &finalDay);
    scanf("%d : %d : %d", &finalHour, &finalMinute, &finalSecond);

    totalInitial = inSeconds(initialDay, initialHour, initialMinute, initialSecond);
    totalFinal = inSeconds(finalDay, finalHour, finalMinute, finalSecond);

    total = totalFinal - totalInitial;

    day = total / (24 * 60 * 60);
    total %= (24 * 60 * 60);
    hour = total / (60 * 60);
    total %= (60 * 60);
    minute = total / 60;
    total %= 60;
    second = total;

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minute);
    printf("%d segundo(s)\n", second);
    return 0;
}