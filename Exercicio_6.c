#include <stdio.h>
#include <conio.h>

void main (){
	int num, num2, num3;
	float results;
	printf("Informe um numero: ");
	acanf("%d", &num);
	printf("Informe outro numero: ");
	scanf("%d", &num2);
	printf("Informe mais um numero: ");
	scanf("%d", &num3);
	result = (float)(num2 - num) / (float)num3;
	printf("Resultado: %0.2f do calculo", result);
}
