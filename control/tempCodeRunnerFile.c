#include <stdio.h>

int main()
{

   int a=1;
   do
   {
     printf( "Iteracion numero %d\n",a );
        a++;
   } while ( a<5 );

   printf( "Fin de programa, valor actual de %d",a );

   return 0;
}