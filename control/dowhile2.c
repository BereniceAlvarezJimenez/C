#include <stdio.h>

int main()
{

   int a=1;
   do  //do while, primero corre y luego compara
   {
     printf( "Iteracion numero %d\n",a );
        a++;
   } while ( a<1 );

   printf( "Fin de programa, valor actual de %d",a );

   return 0;
}