#include <stdio.h>
/*2. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.*/
int main(){
float l, area, peri;

printf("Qual o lado do quadrado\n");
scanf("%f", &l);

area = l * l;
peri = l*4;

printf("%.2f %.2f", area, peri);

}