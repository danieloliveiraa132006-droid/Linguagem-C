/*Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A f ˆ ormula de convers ´ ao˜ e: ´ K = M ∗ 3.6, sendo K a velocidade
em km/h e M em m/s.*/
#include<stdio.h>
int main(){
  float M, K;
    printf("Digite a velocidade em (m/s):\n");
    scanf("%f",&M);

    K = M * 3.6;

    printf("Em km/h ficara:%.2f",K);

}