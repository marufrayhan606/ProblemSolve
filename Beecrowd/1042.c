// 1042 - Simple Sort
#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A < B && B < C)
    {
        printf("%d\n%d\n%d\n\n", A, B, C);
    }
    else if (B < A && A < C)
    {
        printf("%d\n%d\n%d\n\n", B, A, C);
    }
    else if (C < B && B < A)
    {
        printf("%d\n%d\n%d\n\n", C, B, A);
    }
    else if (A < C && C < B)
    {
        printf("%d\n%d\n%d\n\n", A, C, B);
    }
    else if (B < C && C < A)
    {
        printf("%d\n%d\n%d\n\n", B, C, A);
    }
    else if (C < A && A < B)
    {
        printf("%d\n%d\n%d\n\n", C, A, B);
    }

    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}
