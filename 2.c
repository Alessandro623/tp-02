#include <stdio.h>
#include <unistd.h>

	int main(void){
        float nota1, nota2, nota3, promedio;
        printf("Ingrese la nota 1 \n");
        scanf("%f", &nota1);
        sleep(2);
        printf("Ingrese la nota 2 \n");
        scanf("%f", &nota2);
        sleep(2);
        printf("Ingrese la nota 3 \n");
        scanf("%f", &nota3);
        promedio = (nota1 + nota2 + nota3) / 3;
        printf("El resultado final es = %.2f", promedio);
		sleep(1000);
		return 0;
	}