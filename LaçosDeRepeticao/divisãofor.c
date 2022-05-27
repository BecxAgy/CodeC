#include <stdio.h>
/*Escreva um programa que calcule o resto da divisão de A por B (número inteiros e 
positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são 
passados pelo usuário através do teclado.*/
int main(){
    int A, B;
 
    printf("Insira o dividendo e o divisor \n");
    scanf("%i %i", &A,&B);

    
    int resto = 0;
    for (int i = A; i >= B; i-=B)
    {
        resto = i - B;
    }
    printf("O resto é > %i", resto);
    
}