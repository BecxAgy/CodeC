#include <stdio.h>

int main(){
    int atq1, atq2, atq3, par1, par2, par3;

    printf("Insira o valor dos três ataques \n");
    scanf("%i %i %i", &atq1, &atq2, &atq3);

    par1 = atq1%2;
    par2 = atq2%2;
    par3 = atq3%2;

    if (atq1 != 0 && atq2 != 0 && atq3 != 0 )
    {
        if ((atq1>10 || atq2>10 || atq3 >10)&&(par1==0 || par2==0 || par3 ==0))
        {
            printf("Ratata foi derrotado!!");
        }
        else
        {
            printf("Você perdeu");
        }   
    }
    else
    {
        printf("Você perdeu...");
    }
    
} 