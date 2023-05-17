#include <stdio.h>
#include <conio.h>

void main(){
	int i = 1, num;
	printf("Informe um numero para lista: ");
	scanf("%d",&num);
	while(i <= num){
		printf("%d\n", i);
		i++;
	}
}
