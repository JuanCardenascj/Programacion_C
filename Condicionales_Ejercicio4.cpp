/*Ejercicio 4:
Determinar si un n�mero es par o impar*/

#include <stdio.h>

int main() {
    int num;

    // Solicitar al usuario que ingrese un n�mero
    printf("Introduce un n�mero: ");
    scanf("%i", &num);

    // Determinar si el n�mero es par o impar
    if (num % 2 == 0) {
        printf("El n�mero %i es par.\n", num);
    } else {
        printf("El n�mero %i es impar.\n", num);
    }

    return 0;
}


