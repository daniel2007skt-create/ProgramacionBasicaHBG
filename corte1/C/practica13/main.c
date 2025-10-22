#include <stdio.h>
#include <stdlib.h>

int main() {
    float numero, suma = 0;
    int contador = 0;
    float promedio;

    printf("Ingrese numeros positivos (termine con un numero negativo):\n");

    do {
        scanf("%f", &numero);

        if (numero >= 0) {
            suma = suma + numero;
            contador++;
        }

    } while (numero >= 0);

    if (contador > 0) {
        promedio = suma / contador;
        printf("El promedio de los numeros ingresados es: %.2f\n", promedio);
    } else {
        printf("No ingreso ningun numero positivo.\n");
    }

    return 0;
}
