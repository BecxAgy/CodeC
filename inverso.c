#include <stdio.h>

/*16. Escreva um programa para gerar o invertido de um número com três algarismos 
(exemplo: o invertido de 498 é 894).*/

int main(){
    int num, mil,cem,dez,uni, result;

    printf("Insira um número de quatro algarismos\n");
    scanf("%i", &num);

    //1234/10 = 123
    //

    mil = num/1000;
    cem =((num/100)%10)*10;
    dez = ((num/10)%10)*100;
    uni = (num%10)*1000;

    result = uni+dez+cem+mil;

    printf("O número invertido é: %i ", result);



}