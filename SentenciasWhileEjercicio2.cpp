/*Ejercicio 2:

Digite un número, si el numero supera a 10, 
multiplique los 10 primero números, sino, sumelos.*/

#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite un numero: ");
    scanf("%i", &numero);
    
    if (numero >= 10) {
        // Si el número es mayor o igual a 10, multiplicamos los primeros 10 números
        int resultado = 1;
        for (int i = 1; i <= 10; i++) {
            resultado *= i;
        }
        printf("El resultado de multiplicar los primeros 10 números es: %d\n", resultado);
    } else if (numero < 10) {
        // Si el número es menor a 10, sumamos los primeros 10 números
        int suma = 0;
        for (int i = 1; i <= 10; i++) {
            suma += i;
        }
        printf("El resultado de sumar los primeros 10 números es: %d\n", suma);
    } else {
        printf("El número no es válido\n");
    }
    
    return 0;
}

