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
    }