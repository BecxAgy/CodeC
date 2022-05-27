#include <stdio.h>

int main(){
    int num, sMil, sCem, sDez, sUni, somaRest, result;

    printf("Insira um número entre 0 999 \n");
    scanf("%i", &num);

    sMil=num%7;
    sCem=(num/7)%7;
    sDez = (num/49)%7;
    sUni = (num/343)%7;

    somaRest = (sMil+sCem+sDez+sUni)%7;
    result= (num*10)+somaRest;

    printf("O número gerado é %i", result);
}