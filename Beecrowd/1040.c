//1040 - Average 3

#include <stdio.h>
int main(){
    float a, b, c, d, media,x, media_new;
    
    scanf("%f %f %f %f", &a , &b , &c ,&d);
        media = ( a*2 + b*3 + c*4 + d*1 ) / (2 + 3 + 4 + 1);
    printf("Media: %.1f\n", media);

        if (media >= 7.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (media < 5.0)
        {
            printf("Aluno reprovado.\n");
        }
        else if (media >= 5.0 && media <= 6.9)
        {
            printf("Aluno em exame.\n");
            scanf("%f", &x);
            printf("Nota do exame: %.1f\n",x);
            
            media_new = (media + x )/2;

                if (media_new >= 5.0)
                {
                    printf("Aluno aprovado.\n");
                    printf("Media final: %.1f\n", media_new);
                }
                else if (media_new <= 4.9)
                {
                    printf("Aluno reprovado.\n");
                    printf("Media final: %.1f\n", media_new);
                }
                
                
        }
        
        
        

    return 0;
}
