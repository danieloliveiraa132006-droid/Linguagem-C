/*Leia uma distancia em quilometros e apresente-a convertida em milhas. A formula de 
conversao e:  M = K / 161  sendo K a distancia em quilometros e M em milhas*/
#include<stdio.h>
int main(){
  float K, M;
    printf("Digite a distancia em Km/h:\n");
    scanf("%f",&K);

     M = K / 1.61;

    printf("Ficara %.2f milhas",M);
    
    return 0;
}
