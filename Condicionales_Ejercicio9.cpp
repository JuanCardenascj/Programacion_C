/*Ejercicio 9:
Seleccionar un tipo de vehiculo e indicar el peaje a pagar
según un valor numérico:

1-turismo, peaje =$500
2-autobus, peaje =$3000
3-motocicleta, peaje =$300
Caso contrario - vehiculo no autorizado
*/

#include<stdio.h>

int main(){
	char vehiculo;
	
	printf("Digite el tipo de vehiculo en el que va: ");
	scanf("%c",&vehiculo);
	
	switch(vehiculo){
		case 'T': printf("Peaje para Turismo: $500");
		break;
		case 'A': printf("Peaje para AutoBus: $3000");
		break;
		case 'M': printf("Peaje para Motocicleta: $300");
		break;
		case 'MT': printf("Peaje para MotoTriciclo: $1400");
		break;
		default:
            printf("Vehiculo no autorizado\n");
            break;
}
	return 0;
}
