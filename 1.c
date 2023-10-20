#include <stdio.h>
#include <unistd.h>

	int main(void){
		int incremento, decremento;
		printf("ingrese los valores de crecimiento = \n");
		scanf("%d", &incremento);
		printf("ingrese los valores de decrecimiento = ");
		scanf("%d", &decremento);
		printf("El valor ingresado de crecimiento es = %d \n", incremento);
        incremento++;
		printf("El valor incrementado es = %d \n", incremento);
		printf("El valor ingresado de decremento es = %d \n", decremento);
        decremento--;
		printf("El valor decrementado es = %d \n", decremento);
		sleep(1000);
		return 0;
	}