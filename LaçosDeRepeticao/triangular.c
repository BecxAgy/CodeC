#include <stdio.h>

/*54. Construa um programa que receba um número e verifique se ele é um número triangular. 
(Um número é triangular quando é resultado do produto de três números consecutivos. 
Exemplo: 24 = 2 x 3 x 4)
*/
int  main(){
    int numInserido;
    int n1= 0;
    int n2 = 1;
    int n3 = 2;

    printf("insira um número \n");
    scanf("%i", &numInserido);


    int multiplicador= 0;

    while (multiplicador<numInserido)
    {
        n1++;
        n2++;
        n3++;
        multiplicador = n1*n2*n3;
    }
      if (multiplicador != numInserido)
    {
        printf("O número não é triangular");
    }

  
    

    printf("%i %i %i", n1, n2, n3);

    printf("%i", multiplicador);
    
}