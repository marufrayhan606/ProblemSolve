//1020 - Age in Days

#include<stdio.h>

int main(){
    int age;
        scanf("%d",&age);
            int year = age / 365;
            int month = (age%365) / 30;
            int day = ((age%365)%30);
        
        printf("%d ano(s)\n",year);
        printf("%d mes(es)\n",month);
        printf("%d dia(s)\n",day);
    return 0;
}
