#include <stdio.h>

/*43. Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a 
100.*/

int main(){
    int num = 1;
    int soma = 0;

    /*for(int cont = 1; cont <= 101; cont+=2){    
    printf("%i \n", num);
    num+=2;
    }

44. Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma 
de todos eles.*/

    for(int cont =  1; cont <= 100; cont++){
        printf("%i \n", num);
        soma += num;
        num++;
        
    }
    printf("Sua soma é >/ %i", soma);


}



