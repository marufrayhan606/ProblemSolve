// 2058 - Triangles and Regular Polygons
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x == 3)
    {
        printf("1\n");
    }
    else if (x > 3)
    {
        printf("%d\n", x - 2);
    }

    return 0;
}
