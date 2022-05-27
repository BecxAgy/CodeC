#include <stdio.h>

/*Escreva um programa que leia 5 números, e imprima a média entre eles*/

int main(){
    float num1;
    float soma = 0;

    for(float cont = 0; cont < 5; cont++){
        printf("Insira sua nota >/ ");
        scanf("%f", &num1);
        soma +=num1;
    }

    printf("O resultado da soma é >/ %f \n", soma);

    float media = soma/5;
    printf("sua média é %.2f", media);
}