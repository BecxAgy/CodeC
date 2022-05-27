#include <stdio.h>

/*Escreva um programa que leia um valor e imprima todas as possíveis combinações em 
que o lançamento de um par de dados tenha como resultado da soma dos valores dos 
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve 
imprimir as seguintes combinações: 
• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1*/
int main(){
    
    int soma;
    printf("Insira a soma dos dois dados \n");
    scanf("%i", &soma);


    for(int dado1 = 1; dado1 <= 6; dado1++){
        for(int dado2 = 1; dado2 <=6; dado2++){
            if ((dado1+dado2) == soma)
            {
                printf("%i e %i \n", dado1, dado2);
            }    
        }
    }





   

}