#include <stdio.h>

/*51. A série de Fibonacci é formada pela sequencia: 
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... 
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N 
sendo uma entrada do algoritmo).*/
// Fn = fn-1 + Fn-2

int main(){
    int n;
    printf("Insira n para gerar a série FIBONACCI até o N-ésimo termo \n");
    scanf("%i", &n);

    //meu atual= 1
    //meu antecessor = 0
    //antecessor do meu antecessor = 1
    // atual é a soma dos antecessores = ant1+ant2;
    //sabendo que meus antecessores precisam estar na sequencia fibonacci, enta~so
    //ant2 = ant1;
    //ant1 = atual;
    //nesse meio tempo minha variavel vai variar até n
    int ant1 = 1;
    int ant2= 0;
    int fib = 0;

    printf("1\n");
    for(int var = 0;var<n; var++){
        fib = ant1+ant2; //1
        ant2 = ant1;// 1
        ant1=fib; //1
        printf("\n %i \n", fib);
    }

    



}