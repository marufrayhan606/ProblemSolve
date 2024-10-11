//1019 - Time Conversion

#include<stdio.h>


int main(){
    int N;
        scanf("%d",&N);
            int hour = N / 3600;
            int min = (N%3600) / 60;
            int sec = ((N%3600)%60);
        
        printf("%d:%d:%d\n",hour,min,sec);
    return 0;
}
