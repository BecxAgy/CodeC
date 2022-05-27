#include <stdio.h>

/*56. Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores 
próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o 
próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é 
igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2, 
4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).*/

int main(){
    //meu usuário vai inserir numInserido
    //crio uma variavel que vai receber a divisão de numInserido por i
    //divido por uma variavel que comça em 2 aumenta i++ enquanto i <= numInserido
    //o ponto disso, é que os divisores perfeitos devem ter resto == 0
    //além disso, se minha variavel que receber for em int, todos os numero serão inteiros (devo coloca-la em float)
    //se numinserido%i == 0
    //eu vou ter uma soma +=numRecebido;
    //isso será executado até 28/28(exemplo)
    //depois, fora do for, eu tenho que verificar se a soma  gerada por esses divisores é igual ao num Inserido

    int numInserido;

    printf("Insira um número para saber se ele é perfeito \n");
    scanf("%i", &numInserido);

    float numRecebido;
    int soma = 0;

    for(int i = 2; i <= numInserido; i++){
        numRecebido = numInserido/i;

        if ((numInserido%i)==0)
        {
            soma += numRecebido;
        }
        
    }

    if (soma == numInserido)
    {
        printf("O número %i é perfeito!! :) \n", soma);
    }else{
        printf("O número %i não é perfeito... \n ", numInserido);
    }
    

}