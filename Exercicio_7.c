#include <stdio.h>
#include <conio.h>

void main (){
	int num, num2;
	printf("Informe um numero: ");
	scanf("%d", &num);
	printf("Informe outro numero: ");
	scanf("%d", &num2);
	if(num > num2){
		printf("%d eh maior", num);
	}
	else{
		if(num == num2){
			printf("Numero iguais!!!");
		}
		else{
			printf("%d eh maior!!!", num2);
		}
	}
}
