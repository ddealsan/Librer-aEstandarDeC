#include <string.h>
#include <stdio.h>

int main() {
    // Parte a - Comparar dos cadenas de caracteres
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
    // Parte b - Calcular la longitud de una cadena
    char str[] = "Hola mundo";
    int length = strlen(str);
    printf("La longitud de '%s' es: %d\n", str, length);
    return 0;
    }