#include <stdio.h>
/*Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e
um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva
um programa, que imprima o tempo necessário para que a população do país A ultrapasse 
a população do país B.*/
int main(){

    int A = 500000;
    int B = 700000;
    int t = 1; 

    while (A < B)
    {
        B*=2;
        A*=3;
        t++;
    }
    

    printf("o tempo que se passou foi de <%i anos> \n", t);
    printf("%i    %i", A, B);
}