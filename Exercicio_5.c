#include <stdio.h>
#include <conio.h>
	void main(){
		int num, num2, num3, num4, mult;
		printf("Informe o Primeiro numero: ");
		acanf("%d", &num);
		printf("Informe o Segundo numero: ");
		acanf("%d", &num2);
		printf("Informe o Terceiro numero: ");
		acanf("%d", &num3);
		printf("Informe o Quarto numero: ");
		acanf("%d", &num4);
		mult = num * num2 * num3 * num4;
		printf("multiplicaçao: %d", mult);
	}
