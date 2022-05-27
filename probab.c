#include <stdio.h>

/*Escreva um programa em C, que leia a probabilidade de dois eventos independentes
acontecerem. Em seguida, o programa deverá calcular e imprimir a probabilidade de um
dos dois eventos ocorrer, bem como dos dois eventos ocorrerem. A probabilidade é dada
pelas fórmulas abaixo:
P (A e B) = P(A) x P(B)
P(A ou B) = P(A) + P (B) – P(A e B)*/

int main(){
    float p1, p2, p1Ep2, p1OUp2;

    printf("Qual a probabilidade 1 \n");
    scanf("%f", &p1);

    printf("Qual a probabilidade 2 \n");
    scanf("%f", &p2);

    p1Ep2 = p1*p2;
    p1OUp2 = (p1+p2)-(p1*p2);

    printf("A probabilidade de um dos dois acontecerem é %.2f \n A probabilidade dos dois acontecerem em %.2f", p1Ep2, p1OUp2 );

}