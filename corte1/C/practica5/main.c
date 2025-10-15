#include <stdio.h>

int main() {
    int apuesta, numero, ganancia;

    printf("Ingrese la cantidad apostada: ");
    scanf("%d", &apuesta);

    printf("Ingrese cualquier numero para lanzar la moneda: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Salio cara! Ganaste el doble.\n");
        ganancia = apuesta * 2;
    } else {
        printf("Salio cruz! Perdiste todo.\n");
        ganancia = 0;
    }

    printf("Tu ganancia final es: %d\n", ganancia);
    return 0;
}
