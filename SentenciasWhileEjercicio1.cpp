/*Ejercicio 1:
Suma de los n primero números.
*/

#include<stdio.h>

int main(){
	int contador, n, suma=0;
	
	printf("Digite cuantos numero enteros desea sumar: ");
	scanf("%i",&n);
	
	contador = 1;
	
	while(contador<=n){
		suma += contador;
		contador++;
	}
	
	printf("La suma es: %i",&suma);
	
	
	return 0;
}
