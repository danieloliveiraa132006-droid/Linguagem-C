/*Leia um valor de volume em metros cubicos ´ m3 e apresente-o convertido em litros. A
formula de conversao e: L = 1000 ∗ M, sendo L o volume em litros e M o volume em
metros cubicos. */
#include<stdio.h>
int main(){

      float M, L;
      printf("Digite um volume em metros cubicos:\n");
      scanf("%f", &M);

      L = 1000 * M;

      printf("O volume em litros eh: %.2f\n", L);

    return 0;
}