#include <stdio.h>
/*10. Converter um inteiro informado menor que 32 para sua representação em binário*/

int main(){
    int num, binFinal, binM, binMil, binCem, binDez, binUni;

    printf("Insira um número menor que 32 \n");
    scanf("%i", &num);
    
    binM = num%2;
    binMil = ((num/2)%2)*10;
    binCem = ((num/4)%2)*100;
    binDez = ((num/8)%2)*1000;
    binUni= ((num/16)%2)*10000;

    binFinal =  binM + binMil+binCem+binDez+binUni;

    printf("O seu número em binário %i", binFinal);


}