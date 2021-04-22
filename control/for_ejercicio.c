#include <stdio.h>

/* for normal


int main(){ 

    int cont;
    for (cont = 0; cont <=101;cont ++){
        printf("Iteracion numero %d\n",cont);
    }
   return 0;
}
*/

// for anidado
int main(){

    for (int x = 0; x < 5;x++){
        for (int y = 0; y < 5; y++){
            printf("\t[%d, %d]",x,y);
        }
        printf("\n");
    }
   return 0;
}