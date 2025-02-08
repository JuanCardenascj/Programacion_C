/*Operadores de Asignacion*/

#include<stdio.h>

int main(){
	int a,b,c;
	a=b=c=10; //Significa las tres variables valor 10.
	printf("El valor de a,b,c es: %i %i %i",a,b,c);
	
	//Suma
	a = a + 10; //Su valor cambia ahora vale 20.
	a += 10; // a = a + 10
	printf("El valor de a es: %i",a);
	
	//Resta
	a -= 5; // a  = a - 5
	printf("El valor de a es: %i", a);
	
	//Multiplicacion
	a *= 10; //a = a * 10
	printf("El valor de a es: %i", a);
	
	//Division
	a /= 2; // a = a / 2
	printf("El valor de a es: %i", a);
	
	return 0;

}
