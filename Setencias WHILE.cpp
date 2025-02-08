/*Sentencias WHILE

   Sintaxis:
   
   while(Condicion){
   instrucciones;
} 
  */
  
#include <stdio.h>

int main() {
    int i;
    
    i = 1;  // Inicializaci�n de i
    
    // Bucle while que ejecuta las instrucciones mientras i sea menor o igual a 10
    while(i <= 10) {
        printf("%d ", i);  // Imprime el n�mero seguido de un espacio para separar
        i++;  // Incrementa i
    }
    
    return 0;
}

