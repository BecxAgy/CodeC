#include <stdio.h>

/*1. Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu
perímetro*/

int main(){
    float b, h, area, peri;

    printf("Qual tamanho da base?\n");
    scanf("%f", &b);

    printf("Qual tamanho da altura? \n");
    scanf("%f", &h);

    area = b*h;
    peri = (2*b)+(2*h);

    printf("Sua área é: %.2f %.2f", area, peri);



}