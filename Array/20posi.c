#include <stdio.h>
#define TAM 20
/*Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0 
para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na 
posição (um por linha)*/
int main(){
    int posicao[TAM];
    int nota = 1;
    
    for (int i = 0; i < TAM; i++)
    {
        posicao[i]= 0;
        printf("Posição %i = %i \n", nota, posicao[i]);
        nota++;
    }
    
}