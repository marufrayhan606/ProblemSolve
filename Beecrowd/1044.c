//1044 - Multiples

#include<stdio.h>
int main(){
    int A , B ;
    scanf("%d %d", &A, &B);
    if ( A > B && A % B==0)
    {
        printf("Sao Multiplos\n");
    }
    else if (B > A && B % A == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    
return 0;
}

