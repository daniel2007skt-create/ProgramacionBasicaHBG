#include <stdio.h>

int main() {
    int N1, N2;

    printf("Digite un numero: ");
    scanf("%d", &N1);

    printf("Digite otro numero: ");
    scanf("%d", &N2);

    if (N1 > N2) {
        printf("El primer numero (%d) es mayor que el segundo (%d)\n", N1, N2);
    } else if (N1 < N2) {
        printf("El segundo numero (%d) es mayor que el primero (%d)\n", N2, N1);
    } else {
        printf("Los numeros ingresados son iguales: %d y %d\n", N1, N2);
    }

    return 0;
}
