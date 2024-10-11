// 1097 - Sequence IJ 3
#include <stdio.h>

int main()
{
    int initial = 5;
    for (int i = 1; i <= 9; i += 2)
    {
        printf("I=%d J=%d\n", i, initial + 2);
        printf("I=%d J=%d\n", i, initial + 1);
        printf("I=%d J=%d\n", i, initial);
        initial += 2;
    }

    return 0;
}
