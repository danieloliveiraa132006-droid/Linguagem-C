 /*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversao e:  F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.*/
#include<stdio.h>
int main(){
    float C, F;

  printf("Digite a temperatura ambiente em graus Celsius:\n");
  scanf("%f",&C);

  F = C * (9.0/5.0) + 32.0;
  
  printf("Em Fahrenheit ficara:%.2f",F);

  return 0;
}

