#include <stdio.h>

int main() {
    int num1, num2, num3;
    int maximo, minimo;

    printf("Ingrese el primer numero: ");
        scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
        scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
        scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        maximo = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maximo = num2;
    } else {
        maximo = num3;
    }

    // Para hallar el mínimo
    if (num1 <= num2 && num1 <= num3) {
        minimo = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        minimo = num2;
    } else {
        minimo = num3;
    }

    printf("El numero mayor es: %d\n", maximo);
    printf("El numero menor es: %d\n", minimo);

    return 0;
}

