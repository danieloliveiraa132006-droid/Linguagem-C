/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
formula de conversao e:´ K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/
#include<stdio.h>
int main(){
  float C, K;
  
    printf("Digite a temperatura em Celcius:\n");
    scanf("%f",&C);

    K = C + 273.15;

    printf("Em kelvin ficara:%.2f",K);

    return 0;
}
