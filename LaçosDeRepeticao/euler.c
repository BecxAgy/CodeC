#include <stdio.h>
/*O número e (número de Euler) pode ser representado e calculado por meio da utilização 
da série de Taylor para e quando x=1, como a soma da seguinte série infinita: 
� = 1 +
1
1!
+
1
2!
+
1
3!
+ ⋯ +
1
�!
Escreva um programa, que leia o número de termos da série (n) e imprima como saída, o 
cálculo do número de Euler para cada um dos n primeiros elementos da série.*/
int main(){
    int n;

    printf("Insira n \n");
    scanf("%i", &n);

    float euler = 1;
    //o numero de 0 a n será multiplicado entre 0 a n vezes  cada um
    //um for varia de numero
    for(int inicio = 1; inicio <= n; inicio++ ){
        float fat = 1;
        for (int cont = inicio; cont > 0; cont--)
        {
            fat *= cont;
        }
        
        euler += 1/fat;
        printf("Euler é <%f> \n", euler);
    }




}