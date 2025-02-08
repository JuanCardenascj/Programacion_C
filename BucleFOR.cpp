/*El bucle for:
  
  Sintaxis:
  
           for(Inicializacion; condicion; incremento){
           Instrucciones;
           ......
       }
*/

//Mostrar los 10 primeros numeros - ascendentes

#include<stdio.h>

int main(){
	int i;
	
	//Forma Ascendente
	for(i=1; i<=10; i++){
		printf("%i", i);
	}
	
	//Forma Descente
	for(i=1; i<=10; i--){
		printf("%i", i);
	}
	
	
	return 0;
}
