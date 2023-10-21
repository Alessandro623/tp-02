#include <stdio.h>
int main(){
    float altura,radio,altura_cm = 0,radio_cm = 0,volumen_cilindro = 0,PI = 3.14;
    printf("Escriba la altura en metros = ");
    scanf("%f", &altura);
    printf("Escriba el radio en milimetros = ");
    scanf("%f", &radio);
    altura_cm = altura * 100;
    radio_cm = radio / 10;
    volumen_cilindro = PI * (radio_cm * radio_cm) * altura_cm;
    printf("El volumen de su cilindro es %0.2f", volumen_cilindro);
    return 0;
}