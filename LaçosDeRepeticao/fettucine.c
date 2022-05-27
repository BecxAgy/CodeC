#include <stdio.h>
/*A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são 
fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos 
dois termos anteriores, ou seja:
1. Ai = Ai-1 + Ai-2, para i ímpar
2. Ai = Ai-1 - Ai-2, para i par
Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de
FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três 
termos. */

int main(){
    //meu usuário vai entrar com dois termos

    //depois disso eu vou pegar o anttermo1 = ; anttermo2 
    //nisso eu vou variar meu i =0; i < ntermos; i++

    //se numero de termos fornecido pelo usuario for par(ntermos%2 == 0)
    // Ai= termo1 - termo2;
    //termo2= termo1
    //termo1 = ai;
    //se não Ai = anttermo1+anttermo2;
        //termo2= termo1
    //termo1 = ai;
    int termo1, termo2;
    int ntermos;
    int ai;

    printf("Insira dois termos \n");
    scanf("%i %i", &termo1, &termo2);

    printf("Insira a quantidade de termos \n");
    scanf("%i", &ntermos);

    if(ntermos< 3){
        printf("A quantidade de termos é 3... \n Insira um valor maior ou igual a três.");
    }
    

    for (int i = 3; i < ntermos; i++)
    {
        
        if ((i%2) == 0)
        {
            ai = termo1+termo2;
            
        }else{
            ai = termo1 - termo2;  
        }

        termo2=termo1;
        termo1= ai;
        printf("\n %i \n ", ai); 
        
    }
    


}