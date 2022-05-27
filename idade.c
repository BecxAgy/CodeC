#include <stdio.h>
/*7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias*/
int main(){
    int idade, ano, mes, dias;

    printf("Qual sua idade em dias\n");
    scanf("%i", &idade);
    
    ano = idade/365;
    mes = (idade - ano*365)/30;

    int aux = (mes*30)+(ano*365);
    dias = (idade - aux);
    printf("Sua idade é %i %i %i", ano, mes, dias);



}