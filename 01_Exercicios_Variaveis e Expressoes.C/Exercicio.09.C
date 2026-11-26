/*Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s 
(metros por segundo). A formula de convers ao e: M = K/3.6, sendo K a velocidade em
km/h e M em m/s.*/
#include<stdio.h>
int main(){
   float M, K;

    printf("Digite a velocidade em Km/h:\n");
    scanf("%f",&K);

    M = K/3.6;

    printf("ficara %.2f metros por segundo",M);

    return 0;
}
