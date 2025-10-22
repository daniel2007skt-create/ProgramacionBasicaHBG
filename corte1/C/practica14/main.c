#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;

    printf("Ingrese una lista de numeros (termine con 0):\n");

    do {
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }

    } while (numero != 0);

    printf("\nCantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);

    return 0;
}
