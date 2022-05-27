#include <stdio.h>
/*41. Escreva um programa que imprima todos os números inteiros do intervalo fechado de 1 a 
100. */

int main (){
    int num = 1 ;
    int contador = 1;

    /*while (contador < 11)
    {
        printf("%i \n", num);
        num++;
        contador++;
    }*/

    printf("*********************************");

    /*do
    {
        printf("%i \n", num);
        num++;
        contador++;
    } while (contador < 11);*/

    for(int contador = 1; contador < 101; contador++){
        printf("%i \n",num);
        num++;
    }
    
    

}
 