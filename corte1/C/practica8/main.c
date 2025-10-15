#include <stdio.h>

int main() {
    int year;

    printf("Ingrese un año: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("El año es bisiesto.\n");
            } else {
                printf("El año no es bisiesto.\n");
            }
        } else {
            printf("El año es bisiesto.\n");
        }
    } else {
        printf("El año no es bisiesto.\n");
    }

    return 0;
}
