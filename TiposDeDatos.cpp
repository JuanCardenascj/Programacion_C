//Tipos de Datos

#include<stdio.h>

int main(){
	/*Tipos de datos - Enteros*/
	char  a = 'e'; //Tamaño = 1byte Rango: 0..255
	printf("El elemento es: %c", a);
	short b = -15; //Tamaño = 2 bytes Rango: -128 hasta 127
	printf("El elemento es: %i", b);
	int c = 1023; //Tamaño = 2 bytes Rango: -32678 hasta 32678
	printf("El elemento es: %i", c);
	unsigned int d = 148; //Tamaño = 2bytes Rango: 0 hasta 65535
	printf("El elemento es: %i", d);
	long e = 123456; //Tamaño = 4 bytes
	printf("El elemento es: %li", e);
	
	/*Tipos de datos - Decimales*/
	float f = 15,256; //Tamaño = 4 bytes
	printf("El elemento es: %f", f);
	
	/*Tipos de datos - Double (Uno de los mas extensos)*/
	double m = 12345.1234; //Tamaño = 8 bytes
	printf("El elemento es: %lf", m);
	
	
	

	
	
	
	return 0;
}
