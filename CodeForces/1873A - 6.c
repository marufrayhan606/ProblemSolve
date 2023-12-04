#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++)
    {
        char word[4];
        scanf("%s", &word);
 
        if (word[0] == 'a' || word[1] == 'b' || word[2] == 'c')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
 
    return 0;
}