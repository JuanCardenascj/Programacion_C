/*Ejercicio 2:
Comprobar si  un numero digitado por el usuario es 
positivo o negativo*/

#include<stdio.h>

int main(){
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	if(numero > 0){
		printf("Es un numero positivo.");
	} else if (numero < 0){
		printf("Es un numero negativo.");
	} else {
		printf("El numero es cero,");
	}
	
	return 0;
}
