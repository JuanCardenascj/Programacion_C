/*La sentencia if:

    if(Condicion)
    accion
	
*/

//Prueba de Divisibilidad

#include<stdio.h>

int main(){
	int n1,n2;
	
	printf("Digite 2 numeros: ");scanf("%i %i",&n1,&n2);
	
	if(n1 % n2 == 0){
		printf("El numero %i es divisible entre %i", n1,n2);
	} else {
	    printf("El numero %i no es divisible entre %i", n1,n2);	
	}
	
	
	return 0;
}
