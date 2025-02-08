/*Ejercicio 3:
Visualizar la tarifa de la luz según  el gasto de corriente
electrica. Para un gasto menor de 1.000Kwxh
la tarifa es 1.2, entre 1.000 y I.850Kwxh es 1.0 y mayor de 
1,850kwxh 0.9*/

#include<stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){
	//Variables
	float gasto, tasa;
	printf("Digite el total del gasto de energia: ");
	scanf("%f",&gasto);
	
	//Condicionales
	if(gasto < 1000){
		tasa = TARIFA1;
	} if(gasto > 1000 && gasto < 1850){
		tasa = TARIFA2;
	} if(gasto > 1850){
		tasa = TARIFA3;
	}
	
	
	printf("La tasa a pagar es: %f", tasa);
	
	
	
	return 0;
}
