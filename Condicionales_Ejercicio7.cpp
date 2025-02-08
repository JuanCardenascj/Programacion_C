/*Ejercicio 7:
Ingresar por teclado el nombre y el signo de cualquier
persona e imprima el nombre solo si la persona es signo Aries,
caso contrario imprima no es signo Aries*/

#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50], signo[20];
    
    // Pedir el nombre y el signo
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);  // Usamos fgets para permitir espacios en el nombre
    nombre[strcspn(nombre, "\n")] = '\0';  // Eliminar el salto de línea al final de la cadena

    printf("Ingrese su signo: ");
    fgets(signo, sizeof(signo), stdin);
    signo[strcspn(signo, "\n")] = '\0';  // Eliminar el salto de línea al final de la cadena

    // Verificar si el signo es Aries
    if (strcmp(signo, "Aries") == 0) {
        printf("El nombre de la persona es: %s\n", nombre);
    } else {
        printf("No es signo Aries\n");
    }

    return 0;
}

