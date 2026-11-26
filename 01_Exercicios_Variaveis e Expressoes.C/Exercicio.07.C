/*Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
formula de conversao e: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/
#include<stdio.h>
int main(){
  float C, K;
    printf("Digite a temperatura:\n");
    scanf("%f",&K);
 
    C = K - 273.15;

    printf("A temperatura em Kelvin:%.2f graus Celcius",C);
    
    return 0;
}
