/*Ejercicio 11:
Dada una nota de un examen mediante un codigo escribir
el literal que le corresponde a la nota.

A: Excelente
B: Notable
C: Aprobado
D y F: Reprobado
*/

#include<stdio.h>

int main(){
	char nota;
	
	printf("Digite la nota: ");
	scanf("%c",&nota);
	
	switch(nota){
		case 'A': printf("Excelente");
		break;
		case 'B': printf("Notable");
		break;
		case 'C': printf("Aprobado");
		break;
		case 'D,F': printf("Reprobado");
		break;
		default: printf("No entiendo sus digitos");
	}
	
	
	return 0;
}
