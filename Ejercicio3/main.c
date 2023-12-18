#include <stdio.h>

int main() {
    // Parte a - Abrir un archivo de texto para lectura
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

