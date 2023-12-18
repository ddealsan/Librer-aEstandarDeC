#include <stdio.h>

int main() {
    // Intenta abrir el archivo para escritura
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    // Escribe en el archivo
    fprintf(file, "Hola, mundo!\n");

    // Cierra el archivo después de escribir
    fclose(file);

    // Abre de nuevo para lectura
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    // Lee desde el archivo
    char buffer[50];
    fscanf(file, "%s", buffer);

    // Muestra el contenido leído
    printf("Leído del archivo: %s\n", buffer);

    // Cierra el archivo después de leer
    fclose(file);
return 0;
}