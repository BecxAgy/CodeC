#include <stdio.h>

int main(){
   float lado1, lado2, lado3;

   printf("Insira o primeiro lado \n");
   scanf("%f", &lado1);
   printf("Insira o segundo lado \n");
   scanf("%f", &lado2);
   printf("Insira o terceiro lado \n");
   scanf("%f", &lado3);

   int soma12 = lado1+lado2;
   int soma13= lado1+lado3;
   int soma23 = lado2+lado3;

   if (lado1 < soma23 && lado2<soma13 && lado3<soma12)
   {
       printf("Os lados podem ser o comprimento do triangulo");
   }
   else
   {
       printf("Os lados não podem ser o comprimento do triengulo");
   }
}