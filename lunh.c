#include <stdio.h>

int main(){

    int num, num1, num2, num3, num4;

    printf("Insira um número de até 4 dígitos \n");
    scanf("%i", &num);

    num1 = num/1000;
    num2 = (num/100)%10;
    num3 = (num/10)%10;
    num4 = num%10;

    if (num >= 1000)
    {
        num1 *= 2;
        num3 *= 2;
    } 

    else if (num>= 100)
    {
        num2 *= 2;
        num4 *= 2;
    }

    else if (num>=10)
    {
        num3 *= 2;
    }
    
    else if (num>=1)
    {
        num3 *= 2;
    }

    if (num1>9)
    {
        num1 -= 9;
    }
    if (num2>9)
    {
        num2 -= 9;
    }
    if (num3>9)
    {
        num3 -= 9;
    }
    if (num4>9)
    {
        num4 -= 9;
    }

    int soma = num1+num2+num3+num4;
    int verifc = soma%10;
    
    if (verifc == 0)
    {
        printf("Seu número é válido");
    }else{
        printf("Seu número é inváalido");
    }
    
}