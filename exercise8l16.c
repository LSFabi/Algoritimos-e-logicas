#include <stdio.h>
#include <conio.h>

void main(){
	int i = 50, soma;
	while(i <= 80){
		if(i % 2 == 0){
			soma += i;
			printf("Valor e: %d\n", soma);
		}
		i++;
	}
}
