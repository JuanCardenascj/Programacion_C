/*1. Pedir 2 números al usuario y sumarlos, restarlos, multiplicarlos y dividirlos*/

#include<stdio.h>

int main(){
	int n1,n2,suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	printf("Digite el primer numero: ");
	scanf("%i",&n1); //Guarda los datos
	printf("Digite el segundo numero: ");
	scanf("%i",&n2); //Guarda los datos
	
	
	suma = n1+n2;
	resta = n1-n2;
	multiplicacion = n1*n2;
	division = n1/n2;
	
	printf ("La suma es: %i", suma);
	printf ("La resta es: %i", resta);
	printf ("La multiplicacion es: %i", multiplicacion);
	printf ("La division es: %i", division);
	
	return 0;
}
