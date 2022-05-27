#include <stdio.h>

int main(){
    float val, ent;
    int prest;

    printf("Forneça o valor do produto\n");
    scanf("%f", &val);

    prest = val/3;
    ent = val - (prest*2);

    printf("A entrada será %.2f reais \n As duas prestações serão de %i reais", ent, prest);

}