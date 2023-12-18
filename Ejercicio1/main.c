#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    // Parte a - Calcular el valor absoluto de un número
    int num = -10;
    int abs_num = abs(num);
    printf("El valor absoluto de %d es %d\n", num, abs_num);

    // Parte b - Generar un número aleatorio con semilla cambiante
    srand(time(0));

    int numero_aleatorio = rand();
    printf("Número aleatorio: %d\n", numero_aleatorio);
    