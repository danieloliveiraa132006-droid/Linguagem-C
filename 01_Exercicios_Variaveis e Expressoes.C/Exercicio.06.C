/*Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de conversao e:  C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit*/
#include<stdio.h>
int main(){
  float C, F;
    printf("Digite a temperatura:\n");
    scanf("%f",&F);

    C = 5.0 * (F - 32.0)/9.0;

    printf("A temperatura em Celsius e de: %.2f Graus Celcius",C);
    return 0;
}
