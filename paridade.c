#include <stdio.h>

int main(){
    int num, bin, bM, bMil, bCem, bDez, bUni, somaBin, verificPar;

    printf("Insira um número entre 0 e 31 \n");
    scanf("%i", &num);

    bM = (num/16)%2;
    bMil = (num/8)%2;
    bCem = (num/4)%2;
    bDez = (num/2)%2;
    bUni = num%2;

    bin = (bM*10000)+(bMil*1000)+(bCem*100)+(bDez*10)+bUni;
    somaBin = bM + bMil+bCem+bDez+bUni;
    verificPar = somaBin%2;

    if (verificPar == 0)
    {
        bin *= 10;
        printf("Seu número é par %i", bin);
    }else{
        bin = (bin*10)+1;
        printf("Seu número era impar %i", bin);
    }
    
}