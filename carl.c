#include <stdio.h>

int main(){
    int num, binDM, binM, binC, binD, binU;
    int cont = 0;

    printf("insira um número enytre 0 e 32 \n");
    scanf("%i", &num);

    binDM = num%2;
    binM= (num/2)%2;
    binC= (num/4)%2;
    binD = (num/8)%2;
    binU = (num/16)%2;

    if(binDM){
        cont=cont+1;
    }
    if(binM){
        cont=cont+1;
    }
    if(binC){
        cont=cont+1;
    }
    if(binD){
        cont=cont+1;
    }
    if(binU){
        cont=cont+1;
    }
    printf("%i", cont);
}