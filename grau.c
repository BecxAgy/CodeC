#include <stdio.h>
/*Escreva um programa em C, que receba três números representando uma coordenada
geográfica expressa em graus, minutos e segundos, calcule e imprima este valor em
graus decimais. Para tanto, considere que 60 minutos equivalem a um grau e 60
segundos equivalem a um minuto. Assim, por exemplo, 37º39’20’’ (37 graus, 39 minutos
e 20 segundos) equivalem, aproximadamente, a 37.65556 graus decimais.*/
int main (){
    float grau, min, seg;
    float minGrau, segGrau, result;

    printf("Insira uma coordenada geográfica expressa em graus, minutos e segundos\n");
    scanf("%f %f %f", &grau, &min, &seg);

    minGrau = min/60;
    segGrau = seg/3600;

    result = grau+minGrau+segGrau;

    printf("%f %f %f", grau, minGrau, segGrau);

    printf("Seu resultado em graus decimais é %f", result);

}