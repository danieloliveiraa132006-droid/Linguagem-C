/*Leia um valor em real e a cotac¸ao do d ˜ olar. Em seguida, imprima o valor correspondente ´
em dolares.*/
#include<stdio.h>
int main(){
    float R, D;

     printf("Digite um valor em reais:\n");
     scanf("%f", &R);

     D = R / 6.26;

     printf("O valor sera: %.2f D$\n",D);
     
     return 0;
}