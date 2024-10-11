//1017 - Fuel Spent

#include<stdio.h>


int main(){
    int A,B;
    double Distance,Amount;
        scanf("%d", &A);
        scanf("%d", &B);
    Distance=A*B;
    Amount=Distance/12;
        printf("%0.3lf\n",Amount);
    return 0;
}
