#include <stdio.h>

int main (void){
    float montoIngresado;
    float calcularRecargo;
    float recargoAtencion = 15;
    float descuento;
    float calcularDescuento;
    printf("Ingrese el monto con el que abonara = ");
    scanf("%f", &montoIngresado);
    calcularRecargo = montoIngresado + (montoIngresado * recargoAtencion / 100);
    printf("Su monto con recargo es = %.2f \n", calcularRecargo);
    printf("Ingrese el descuento que quiera = ");
    scanf("%f", &descuento);
    calcularDescuento = calcularRecargo - (calcularRecargo * descuento / 100);
    printf("Su monto con recargo y descuento aplicado es = %.2f", calcularDescuento);
    return 0;
}