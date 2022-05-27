#include <stdio.h>

/*58. O valor aproximado do número π pode ser calculado usando-se a série
� = 1 − 1
3! +
1
5! − 1
7! +
1
7! …
Faça um programa que calcule e imprima o valor de π usando os N primeiros termos da 
série (N sendo informado durante a execução do algoritmo)*/

int main(){
    //Usar 3; 5; 5; 7;
    //Um laço que será executado 4 vezes controlará as 4 entradas dos usuário
    //um outro laço fará o número digitado ser multiplicado 3 vezes (pot = 1)
    //enquanto auxMulti que tem valor 0 for menor que 3
    //pot*=entrada;
    //após esse segundo for,dentro do 1 for, eu somo na variavel soma +=1/pot

    //depois desses for, eu faço pi = 1 - (soma);

    float entrada;
    
    float soma = 0;

    for ( int i = 0; i < 4; i++)
    {
        printf("Insira o número: \n");
        scanf("%f", &entrada);
        if (i == 0 || i == 2)
        {
            entrada = (-1)*entrada;
        }
        float pot = 1;
        int auxMult = 0;
  
        while (auxMult < 3)
        {
            pot *= entrada;
            auxMult++;
            printf("\n Pot %f \n", pot);
        }
        
        soma+=(1/pot);
        
        printf("o resutado é %.5f", soma);

   
    }
    float pi = 1 + (soma) ;
    printf("PI É %f", pi);

    

    
    
}