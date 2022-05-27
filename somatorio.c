#include <stdio.h>

/*57. Send um somatório de N (informado pelo 
usuário) termos, escreva um programa para calcular S para um número N*/

int main(){
    //somatório de 1/1^1 + 1/2^2 + 1/3^3 ....
    
    int n;

    printf("Insira n \n");
    scanf("%i", &n);

    float soma = 0;
    float multi;

    for(int base = 1; base <= n; base++){
        multi = 1;
        int aux = 1;
        while (aux <= base)
        {
            multi*= base;
            aux++;
        }
        soma += 1/multi;
        printf("\n A soma é: \n %f \n", soma);
        
    }
         
    
        
  
        
    }
