#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int NumeroAdivinar, Nusuario, Intentos = 0;

    srand(time(NULL));
    NumeroAdivinar = (rand() % 10) + 1;

    do {
        printf("Adivine el número (entre 1 y 10): ");
        scanf("%d", &Nusuario);
        Intentos++;

        if (Nusuario > NumeroAdivinar) {
            printf("El número secreto es menor.\n");
        } else if (Nusuario < NumeroAdivinar) {
            printf("El número secreto es mayor.\n");
        } else {
            printf("¡Correcto! El número era %d\n", NumeroAdivinar);
            printf("Cantidad de intentos: %d\n", Intentos);
        }

    } while (Nusuario != NumeroAdivinar);

    return 0;
}
