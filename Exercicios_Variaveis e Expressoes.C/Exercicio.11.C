/*Leia uma distancia em milhas e apresente-a convertida em quilometros. A formula de 
conversao e: K = 1, 61 ∗ M, sendo K a distancia em quilometros e  M em milhas*/
#include<stdio.h>
int main(){
   float M, K;

    printf("Digite a velocidade em milhas:\n");
    scanf("%f",&M);

    K = 1.61 * M;

    printf("A velocidade ficara: %.2f Km/h",K);
    return 0;
}
