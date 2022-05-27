#include <stdio.h>

/*Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e 
positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são 
passados pelo usuário através do teclado.*/


int main(){
//Quociente ´o mesmo que quantas vees precisei dividir o aquele numero por outro 
//Um contador que mostra quantas vezes subtrai A de B

int A, B;


printf("Insira o dividendo e o divisor \n");
scanf("%i %i", &A,&B);
int cont = 0;

for (int auxA = A; auxA > B; auxA-=B){
    cont++;
    
    
}

int quociente = cont;


printf("Seu quociente é > %i", quociente);
}