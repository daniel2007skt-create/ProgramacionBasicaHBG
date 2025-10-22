#include <stdio.h>
#include <stdlib.h>

int main() {
    int contrasenaCorrecta = 1234;
    int contrasenaIngresada;
    int intentos = 0;

    printf("=== Validacion de contrasena ===\n");

    while (intentos < 3) {
        printf("Ingrese la contrasena (numerica): ");
        scanf("%d", &contrasenaIngresada);

        if (contrasenaIngresada == contrasenaCorrecta) {
            printf("Contrasena Correcta\n");
            return 0;  // Finaliza el programa
        } else {
            printf("Lo siento, contrasena equivocada\n");
        }

        intentos++;
    }

    printf("Ha superado el numero maximo de intentos.\n");

    return 0;
}
