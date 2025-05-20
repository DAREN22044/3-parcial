#include <stdio.h>
#include <stdlib.h>

int main(){
   char cadena [10];
   printf("Un int ocupa %d bytes\n", sizeof(int));
   printf("Un Char ocupa %d bytes\n",sizeof(char));
   printf("Un float ocupa %d bytes\n",sizeof(float)); 
   printf("Un double ocupa %d bytes\n",sizeof(double)); 
   printf("Un cadena ocupa %d bytes\n", sizeof(cadena));
   return 0;  
}