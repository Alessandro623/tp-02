#include <stdio.h>

int main (void){
    int num1,num2, numA;
    printf("Ingrese numero 1 = \n");
    scanf("%d", &num1);
    printf("Ingrese numero 2 = \n");
    scanf("%d", &num2);
    printf("Invirtiendo valores...\n");
    numA = num1;
    num1 = num2;
    num2 = numA;
    printf("los valores invertidos son... valor1 = %d, valor2= %d", num1,num2);
    return 0;
}