#include <stdio.h>

int main() {
    int respuesta;
    do {
        int opcion;
        printf("Seleccione una figura para calcular su area y perimetro:\n");
        printf("1) Cuadrado\n");
        printf("2) Rectangulo\n");
        printf("3) Triangulo\n");
        printf("4) Circulo\n");
        printf("Ingrese su opcion (1-4): ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            float lado;
            printf("Ingrese el lado del cuadrado: ");
            scanf("%f", &lado);
            printf("Area del cuadrado: %.2f\n", lado * lado);
            printf("Perimetro del cuadrado: %.2f\n", 4 * lado);

        } else if (opcion == 2) {
            float base, altura;
            printf("Ingrese la base del rectangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &altura);
            printf("Area del rectangulo: %.2f\n", base * altura);
            printf("Perimetro del rectangulo: %.2f\n", 2 * (base + altura));

        } else if (opcion == 3) {
            float base, altura, lado1, lado2, lado3;
            printf("Ingrese la base del triangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triangulo: ");
            scanf("%f", &altura);
            printf("Ingrese los tres lados del triangulo:\n");
            printf("Lado 1: ");
            scanf("%f", &lado1);
            printf("Lado 2: ");
            scanf("%f", &lado2);
            printf("Lado 3: ");
            scanf("%f", &lado3);
            printf("Area del triangulo: %.2f\n", (base * altura) / 2);
            printf("Perimetro del triangulo: %.2f\n", lado1 + lado2 + lado3);

        } else if (opcion == 4) {
            float radio;
            float pi = 3.14159;
            printf("Ingrese el radio del circulo: ");
            scanf("%f", &radio);
            printf("Area del circulo: %.2f\n", pi * radio * radio);
            printf("Perimetro del circulo: %.2f\n", 2 * pi * radio);

        } else {
            printf("Opcion no valida.\n");
        }

        printf("\nDesea calcular otra figura? (1 = Si, 0 = No): ");
        scanf("%d", &respuesta);

    } while (respuesta == 1);

    printf("Programa finalizado.\n");

    return 0;
}

