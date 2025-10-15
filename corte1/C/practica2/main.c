#include <stdio.h>

int main() {
    int opcion, cantidad;
    float total;

    do {
        printf("\nSeleccione un producto:\n");
        printf("1) Leche\n");
        printf("2) Cereal\n");
        printf("3) Arroz\n");
        printf("4) Pan tajado\n");
        printf("5) Huevo tipo AA\n");
        printf("6) Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 5) {
            printf("Ingrese la cantidad: ");
            scanf("%d", &cantidad);

            if (opcion == 1) {
                total = 3350 * cantidad;
                printf("Producto: Leche\n");
            } else if (opcion == 2) {
                total = 6800 * cantidad;
                printf("Producto: Cereal\n");
            } else if (opcion == 3) {
                total = 1990 * cantidad;
                printf("Producto: Arroz\n");
            } else if (opcion == 4) {
                total = 3250 * cantidad;
                printf("Producto: Pan tajado\n");
            } else if (opcion == 5) {
                total = 13990 * cantidad;
                printf("Producto: Huevo tipo AA\n");
            }

            printf("Cantidad: %d\n", cantidad);
            printf("Importe total: %.2f\n", total);

        } else if (opcion != 6) {
            printf("Opcion no valida.\n");
        }

    } while (opcion != 6);

    printf("Programa finalizado.\n");

    return 0;
}
