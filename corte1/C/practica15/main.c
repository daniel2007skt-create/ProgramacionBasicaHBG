#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i, contador = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("El numero no es primo.\n");
    } else {
        for (i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                contador++;
            }
        }

        if (contador == 2) {
            printf("El numero %d es primo.\n", numero);
        } else {
            printf("El numero %d no es primo.\n", numero);
        }
    }

    return 0;
}
