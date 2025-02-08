/*Calcular el mayor de los numeros leídos 
del teclado y visualizarlo en pantalla*/

#include <stdio.h>

int main() {
    int num, mayor, cantidad, i;

    // Solicitar la cantidad de números a ingresar
    printf("¿Cuántos números desea ingresar? ");
    scanf("%i", &cantidad);

    // Leer el primer número para inicializar el mayor
    printf("Ingrese un número: ");
    scanf("%i", &num);
    mayor = num;  // Inicializamos el mayor con el primer número

    // Leer el resto de los números y comparar con el mayor
    for (i = 1; i < cantidad; i++) {
        printf("Ingrese un número: ");
        scanf("%i", &num);

        if (num > mayor) {
            mayor = num;  // Actualizamos el mayor si es necesario
        }
    }

    // Mostrar el mayor número ingresado
    printf("El mayor número ingresado es: %i\n", mayor);

    return 0;
}

