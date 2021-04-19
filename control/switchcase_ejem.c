#include <stdio.h>
#include <stdlib.h>

int main(){
    float a = 0, b = 0, resultado = 0;
    int operacion;

    printf("Dame el primer numero: \n");
    scanf("%f", &a);
    printf("Dame el segundo numero: \n");
    scanf("%f", &b);
    printf("¿Que operacion deseas realizar?\n");
    printf("1.- Suma\n2.- Resta\n3.- Multiplicacion\n4.- Division\n5.- Salir\n");
    scanf("%d", &operacion);
    
    switch (operacion){

        case 1:

            resultado = a + b;
            printf("El resultado de %0.2f + %0.2f = %0.2f",a,b, resultado);
            break;
        case 2:
            printf("El resultado de %0.2f + %0.2f = %0.2f",a,b, a - b);
            break;
        case 3:
            printf("El resultado de %0.2f + %0.2f = %0.2f",a,b, a * b);
            break;
        case 4:
            if(b==0){
                printf("La division entre %0.2f no está definida \n",b);
            }else{
                printf("El resultado de %0.2f / %0.2f = %0.2f",a, b, a / b);
            }
            break;
        case 5:
            printf("Salir \n");
            exit(0);
        default:
            printf("Elige una funcion valida \n");
    }
    return 0;
}