#include <stdio.h>

int main(){
    int trit, tMil,tCem, tDez, tUni, auxMil=0 , auxCem=0 , auxDez=0 , auxUni=0;

    printf("Insira um trit de até quatro dígitos \n");
    scanf("%i", &trit);

    tMil = trit/1000;
    tCem = (trit/100)%10;
    tDez = (trit/10)%10;
    tUni = trit%10;

    if (tMil == 2)
    {
        auxMil = 27;
    }

    if (tCem == 2)
    {
        auxCem = 9;
    }
    else if(trit >= 1000 && tCem == 0)
    {
        auxCem = (-9);
    }
    if (tDez == 2)
    {
        auxDez = 3;
    }
    else if(trit >= 100 && tDez == 0)
    {
        auxDez = (-3);
    }
    if (tUni == 2)
    {
        auxUni = 1;
    }
    else if (trit>=10 && tUni ==0)
    {
        auxUni = (-1);
    }

    int resultado = auxMil+auxCem+auxDez+auxUni;

    printf("O valor em decimal é %i", resultado);
}