#include <stdio.h>

/*48. Escreva um programa que determine se um dado número N (digitado pelo usuário) é 
primo ou não*/

int main(){
   int n;

    printf("Insira o número do dado \n");
    scanf("%i", &n);
//saber que um numero é primo -- n%2 != 0
//não primo n%2 == 0
    int aux = n;

    while (aux > 0)
    {
        aux-=2;
    }

    if (aux == 0)
    {
        printf("O número não é  primo <%i>", aux);

    }else{
        printf("O número primo <%i>", aux);
    }
    

    
    

}