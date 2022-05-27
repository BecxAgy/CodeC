#include <stdio.h>
/*Escreva um programa que calcule o resto da divisão de A por B (número inteiros e 
positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são 
passados pelo usuário através do teclado.*/

int main(){
//tenho que subtrair B de A enquanto  AuxB < A,
int A, B;
 
printf("Insira o dividendo e o divisor \n");
scanf("%i %i", &A,&B);



int auxA= A;

while(auxA >= B){
 auxA -= B;
 printf("\n %i \n", auxA);
}
//veja que enquanto ele for maior que B, irá ser subtraido de B
//então preciso subtrair isso, caso contrario meu resto não estara´de acordo
int resto = auxA;
printf("SEU RESTO É  <%i>", resto);  

printf("////////////////////////////////////////// \n");
  
}
