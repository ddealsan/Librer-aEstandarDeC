#include <stdio.h>

int main() {
    // Parte a - Abrir un archivo de texto para lectura
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

// Cerrar el archivo al final de la lectura
    fclose(file);

    // Parte b - Escribir y leer en un archivo de texto
    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file);

    // Abrir de nuevo para leer
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);

    return 0;
}