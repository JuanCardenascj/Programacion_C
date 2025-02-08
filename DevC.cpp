//Directivas del Preprocesador y Variables

/*Librerias*/
#include<stdio.h>

/*Macros*/
//Definen variables a lo largo del programa
#define PI 3.1416

int y = 5; //Variable Global

int main(){
	/*Variables*/
	int x = 10; //Variable local dentro de una funcion
	
	int suma = 0;
	
	suma = PI + x; //Almacena el valor
	
	printf("La suma es: %i",suma); // %Indica tipo de dato, suma.
	return 0; //Indica que termina todo ok.
}
