// 1151 - Easy Fibonacci
#include <stdio.h>
int main()
{

    int n, a = 0, b = 1, tmp;
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", a);
        tmp = b;
        b = a + b;
        a = tmp;
    }
    printf("%d\n", a);

    return 0;
}