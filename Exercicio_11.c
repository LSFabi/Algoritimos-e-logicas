#include <stdio.h>
#include <conio.h>

void main(){
    float num1, num2, media;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    media = (num1 + num2) / 2;
    
    printf("A media dos dois numeros e: %f", media);
}

