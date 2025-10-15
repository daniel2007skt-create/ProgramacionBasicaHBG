#include <stdio.h>

int main() {
    int trabajador;
    float horas, precio_hora, sueldo_bruto, retencion, sueldo_neto;

    printf("Seleccione el trabajador:\n");
    printf("1) Juan\n");
    printf("2) Ana\n");
    printf("3) Luis\n");
    printf("4) Marta\n");
    printf("5) Sofia\n");
    printf("Ingrese el numero del trabajador: ");
    scanf("%d", &trabajador);

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el precio por hora: ");
    scanf("%f", &precio_hora);

    sueldo_bruto = horas * precio_hora;
    retencion = sueldo_bruto * 0.05;
    sueldo_neto = sueldo_bruto - retencion;

    printf("\n-------------------------------\n");

    if (trabajador == 1) {
        printf("Trabajador: Juan\n");
    } else if (trabajador == 2) {
        printf("Trabajador: Ana\n");
    } else if (trabajador == 3) {
        printf("Trabajador: Luis\n");
    } else if (trabajador == 4) {
        printf("Trabajador: Marta\n");
    } else if (trabajador == 5) {
        printf("Trabajador: Sofia\n");
    } else {
        printf("Trabajador no valido.\n");
    }

    printf("Sueldo bruto: %.2f\n", sueldo_bruto);
    printf("Retencion (5%%): %.2f\n", retencion);
    printf("Sueldo neto: %.2f\n", sueldo_neto);

    return 0;
}
