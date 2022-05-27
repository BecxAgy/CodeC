#include <stdio.h>

/*42. Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem 
decrescente).*/

int main(){
    int num = 100;
    int cont = 1;

    /*for(int cont =1 ; cont < 101; cont++){
        printf("%i \n", num);
        num--;
    }*/

    while(cont< 101){
        printf("%i \n", num);
        num--;
        cont++;
    }

    
    
}