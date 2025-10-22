#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    int contador = 0;
    int i;

    printf("Ingrese el primer numero (debe ser mayor): ");
    scanf("%d", &N);
    printf("Ingrese el segundo numero (menor): ");
    scanf("%d", &M);

    if (N <= M) {
        printf("Error: el primer numero debe ser mayor que el segundo.\n");
        return 0;
    }

    printf("\nNumeros pares entre %d y %d:\n", M, N);

    for (i = M + 1; i < N; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            contador++;
            if (contador == 3) {
                break;
            }
        }
    }

    if (contador < 3) {
        printf("No hay tres numeros pares entre los valores ingresados.\n");
    }

    return 0;
}
