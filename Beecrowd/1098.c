// 1098 - Sequence IJ 4
#include <stdio.h>

int main()
{
    float i, j1 = 1, j2 = 2, j3 = 3;

    for (i = 0; i <= 2.1; i += 0.2)
    {

        if (i == 0 || i == 1 || i >= 2.0)
        {
            printf("I=%0.0f J=%0.0f\n", i, j1);
            printf("I=%0.0f J=%0.0f\n", i, j2);
            printf("I=%0.0f J=%0.0f\n", i, j3);
        }
        else
        {
            printf("I=%0.1f J=%0.1f\n", i, j1);
            printf("I=%0.1f J=%0.1f\n", i, j2);
            printf("I=%0.1f J=%0.1f\n", i, j3);
        }
        j1 += 0.2;
        j2 += 0.2;
        j3 += 0.2;
    }

    return 0;
}
