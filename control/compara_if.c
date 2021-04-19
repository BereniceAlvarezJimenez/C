#include <stdio.h>
// Encontrar el mayor de dos números
// Declarando e inicializando variables

int x=0;
int y=0;

int main(void){
    printf("\tIngresa un numero: ");
    scanf("%d",  &x);

    printf("\tIngresa un numero: ");
    scanf("%d", &y);

    if(x==y){
        printf("\nEsto es el primer IF\n");
        printf("%d es igual que %d", x,y);
    }else{
        if(x>y){
            printf("\nEsto es el segundo un IF\n");
            printf("%d es mayor que %d", x,y);
        }else{
            printf("\nEsto es un ELSE\n");
            printf("%d es mayor que %d", y,x);
        }
    }
    
    printf("\nFin de progrma");
    return 0;
}