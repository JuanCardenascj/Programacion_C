/*Calcular el mayor de los numeros le�dos 
del teclado y visualizarlo en pantalla*/

#include <stdio.h>

int main() {
    int num, mayor, cantidad, i;

    // Solicitar la cantidad de n�meros a ingresar
    printf("�Cu�ntos n�meros desea ingresar? ");
    scanf("%i", &cantidad);

    // Leer el primer n�mero para inicializar el mayor
    printf("Ingrese un n�mero: ");
    scanf("%i", &num);
    mayor = num;  // Inicializamos el mayor con el primer n�mero

    // Leer el resto de los n�meros y comparar con el mayor
    for (i = 1; i < cantidad; i++) {
        printf("Ingrese un n�mero: ");
        scanf("%i", &num);

        if (num > mayor) {
            mayor = num;  // Actualizamos el mayor si es necesario
        }
    }

    // Mostrar el mayor n�mero ingresado
    printf("El mayor n�mero ingresado es: %i\n", mayor);

    return 0;
}

