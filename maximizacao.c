#include <stdio.h>

//numeros iguais eu mantenho

int main (){
    int numA, numB, numAU, numAD, numAC, numBU, numBD, numBC;
    int auxA = 0, auxB = 0;
    int baseA = 1, baseB = 1;

    printf("Insira os dois número inteiros />  ");
    scanf("%i %i", &numA, &numB);

    //Unidade
    numAU = numA%10;
    numBU = numB%10;
    

    if (numAU > numBU)
    {
        auxA += numAU;
        baseA *= 10;

    }else if(numBU < numAU){
       
        auxB += numBU;
        baseB *= 10;
    }else{
        auxA = numAU;
        auxB = numBU;
        baseA *= 10;
        baseB *= 10;
    }

    //Dezena 

    numAD = (numA/10)%10;
    numBD = (numB/10)%10;

    if(numAD > numBD){
        
        auxA += (numAD * baseA);
        baseA *= 10;
    }else if(numBD > numAD){
        auxB += (numBD * baseB);
        baseB *= 10;
    }else{
        auxA += (numAD*baseA);
        auxB += (numBD*baseB);
        baseA *=10;
        baseB *= 10;

    }

    //Centena
    numAC = numA/100;
    numBC = numB/100;

    if(numAC > numBC){
        auxA += (numAC * baseA);
        
    }else if(numBD > numAD){
        auxB += (numBC * baseB);
    }else{
        auxA += (numAC*baseA);
        auxB += (numBC*baseB);
    }

    //Tratando dos remanescentes

    if (auxA == 0)
    {
        auxA -= 1;
    }

    if (auxB == 0)
    {
        auxB -= 1;
    }

    // Printando o código que me fez zerar a prova <3

    printf("A dupla de número é (%i, %i)", auxA, auxB);
    
}