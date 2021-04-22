#include <stdio.h>

int main() 
{

   int a=1; 
   while(a<1){  //primero compara y luego corre
       printf( "Iteracion numero %d\n",a );
       a++;
   }printf( "Fin de programa, valor actual de %d",a );

   return 0;
}