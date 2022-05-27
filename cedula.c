#include <stdio.h>
/*17. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum 
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado 
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" 
no sentido de que as notas de menor valor fossem distribuídas em número mínimo 
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar 
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir 
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).*/
int main(){
    int valor;
    int nota1, nota2, nota5, nota10, nota50, nota100;
    
    printf("insira o valor do saque \n");
    scanf("%i", &valor);

    nota100 = valor/100;
    valor %= 100;

    nota50 = valor/50;
    valor %= 50;

    nota10 = valor/10;
    valor %= 10;

    nota5 = valor/5;
    valor %= 5;

    nota2 = valor/2;
    valor %= 2;

    nota1 = valor/1;
    valor%=1;

    printf("Nota 100 %i \n", nota100);
    printf("Nota 50 %i \n", nota50);
    printf("Nota 10 %i \n", nota10);
    printf("Nota 5 %i \n", nota5);
    printf("Nota 2 %i \n", nota2);
    printf("Nota 1 %i \n", nota1);

}