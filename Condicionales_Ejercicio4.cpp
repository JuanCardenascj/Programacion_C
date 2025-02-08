/*Ejercicio 4:
Determinar si un número es par o impar*/

#include <stdio.h>

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Introduce un número: ");
    scanf("%i", &num);

    // Determinar si el número es par o impar
    if (num % 2 == 0) {
        printf("El número %i es par.\n", num);
    } else {
        printf("El número %i es impar.\n", num);
    }

    return 0;
}


