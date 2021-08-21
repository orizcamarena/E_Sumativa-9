/*Elaborar una aplicacion en lines de comando en C que pueda calcular 
y presentar cuantas cifras tiene un determinado valor numerico introducido
por el teclado */

#include <stdio.h>
#include <conio.h>


int main (){

  int num, cont = 1; 
  printf("\n\t\t     Evaluacion  Sumativa #9 \n ");
  printf(" \n  Introduce un numero: "); 
  scanf("%d", &num); 

  while (num / 10 > 0)
  {
    num = num/10; 
    cont++; 
  }

   printf("\n Este numero contiene %d cifras. \n\n", cont); 

   return 0; 

}
  
