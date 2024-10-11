// 2006 - Identifying Tea
#include <stdio.h>

int main()
{
    int A, B, C, D, E, T, counter = 0;
    scanf("%d", &T);

    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if (T == A)
    {
        counter++;
    }
    if (T == B)
    {
        counter++;
    }
    if (T == C)
    {
        counter++;
    }
    if (T == D)
    {
        counter++;
    }
    if (T == E)
    {
        counter++;
    }
    printf("%d\n", counter);

    return 0;
}
