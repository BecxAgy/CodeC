#include <stdio.h>

/*55. Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores 
próprios do outro. Os divisores próprios de um número positivo N são todos os divisores 
inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e 
220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110. 
Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20 
+ 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142, 
efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220). 
Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e 
18416 são amigos, por exemplo).*/

//Meu esquema será assim

int main(){
    int numInserido;
    int numAmigo;

    printf("Insira um número e o seu amigo \n");
    scanf("%i %i", &numInserido, &numAmigo);

    float recebeNum;
    int soma = 0;
    
//crirei uma variavel que será dividida pelo contador - recebeNum
//dentro do for o esquema será -- 
    for(int  i = 2 ; i <= numInserido; i++){
        recebeNum = numInserido/i;
    
        if ((numInserido%i) == 0)
        {
            soma+=recebeNum;
        }
        
    }
    if (soma == numAmigo)
    {
        printf("Os números %i e %i são amigos :)", numInserido, soma);
    }else{
    printf("Ops, esses números não são amigos, na verdade o amigo de %i é %i", numInserido, soma);
   }
    

   
}