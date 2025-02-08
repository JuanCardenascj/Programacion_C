/*Ejercicio 3:
Sacar la hipotenusa de un triángulo
rectángulo, pidiendo al usuario el valor de los
3 catetos.*/

#include<stdio.h>
#include<math.h> //Libreria para raiz

int main(){
	float hipotenusa, cateto1, cateto2;
	
	printf("Digite los dos catetos: ");
	scanf("%f %f",&cateto1,&cateto2);
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	printf("La hipotenusa del triangulo es: %f", hipotenusa);
	
	
	
	return 0;
}
